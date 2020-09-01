#include<stdio.h>
#include<conio.h>
//anunciamos la funcion que usaremos
float  func_promedio(int n1, float []);
float func_conta(float n1, float []);
float suma=0,promedio=0;
int cantidad=0;
int main(){


    float nota=0;
    printf("\n introduzca los numeros de casos: ");
    scanf("%d",&cantidad);


    float arreglo_notas[cantidad];
    for(int x=0;x<cantidad;x++){
        printf("\n introduzca su cantidad %d",x+1);
        printf(": " );
        scanf(" %f",&nota); //leemos cada nota
        arreglo_notas[x]=nota; //pasamos la nota leida al arreglo en la posicion x
    }
    printf("%.2f",func_promedio(cantidad,arreglo_notas ), func_conta(promedio,arreglo_notas)); //imprimimos el promedio usando la funcion
}
float  func_promedio(int cant, float arreglo_notas[]) //declaramos la funcion y la operacion que realiza
{

    for(int x=0;x<cant;x++){
        suma=suma+arreglo_notas[x]; //sumamos cada nota en la variable suma
    }
    promedio=suma/cant;

    return promedio; //valor que devuelve la funcion


}
float func_conta(float promedio, float arreglo_notas[] ) {
    float cont = 0;
    for(float i=0;i<cantidad;i++){
        if (arreglo_notas[(int )i] > promedio) {
            cont++;
        }
        return cont;

    }

}
