#include <iostream>

int main()
{
    FILE* salida, * entrada;
    salida = fopen("c:\\test_sniffer\\salida.txt", "w");

    if (salida == NULL)
    {
        printf("Error, no se puede abrir el archivo\n");

    }
    else
    {

        int a=100, b=200;

        int vals [] ={0x6c,0x71,0xd9,0x2f,0x47,0x05,0x10,0x50,0x72,0x7c,0x86,0x6e,0x08,0x00,0x45,0x70,
                        0x00,0x34,0x60,0xf5,0x40,0x00,0xed,0x06,0x61,0x10,0x0d,0xe2,0xfb,0x81,0xc0,0xa8,
                        0x01,0x42,0x01,0xbb,0xfb,0x6a,0xc3,0x39,0xba,0x12,0x40,0x31,0x73,0x87,0x80,0x10,
                        0x00,0x7b,0x18,0x59,0x00,0x00,0x01,0x01,0x05,0x0a,0x40,0x31,0x73,0x86,0x40,0x31,
                        0x73,0x87};


        // HeaderLength
        int HeaderLength = ((vals[14]) & ((1 << (4)))-1);
        printf("Header Length: %d bytes (%d)\n" , HeaderLength * 4, HeaderLength);

        // Version
        int version= vals[14];
        printf("version: %d\n ", version >>4);

        //Source Port
        int Sport = ((vals[34] << 8) ^ vals[35]);
        printf("Source Port: %d\n" , Sport);

        //Destination Port
        int Dport = ((vals[36] << 8) ^ vals[37]);
        printf("Destination Port: %d\n" , Dport);

        // Differentiated Services Field
        printf("Differentiated Services Field: %d\n" , vals[15]);

        // Total Length
        int TotalLength = ((vals[16] << 8) ^ vals[17]);
        printf("Total Length: %d\n" , TotalLength);
        // identicacion
        int Identicacion = ((vals[18] << 8) ^ vals[19]);
        printf("Identicacion : %d\n" , Identicacion);

        //IP
        int surce4 = vals[26];
        int surce3 = vals[27];
        int surce2 = vals[28];
        int surce1 = vals[29];

        printf("Source = %u", (surce4 & 255));
        printf(".");
        printf("%u", (surce3 & 255));
        printf(".");
        printf("%u", (surce2 & 255));
        printf(".");
        printf("%u\n", (surce1 & 255));

        fwrite(vals, sizeof(int), 2, salida);
        fclose(salida);
    }
    //aqui leer archivo
    entrada = fopen("c:\\test_sniffer\\salida.txt", "r");
    if (entrada == NULL)
    {
        printf("Error, no se puede abrir el archivo\n");
    }
    else
    {
        // se escribe al archivo de salida
        //al final se cierra
        int x = 100, y = 200;
        int rvals[2];

        fread(rvals, sizeof(int), 2, entrada);
        fclose(entrada);

        printf("%i , %i", rvals[0], rvals[1]);
    }
    return 0;
}
