
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

double vdd;
double nop;
double perc;
int v1 = rand()%100+1;

int main()
{
    bool a[v1];

    for (int i=0; i<v1;i++)
    {
        if(a[i])
        {
            puts("T");
            vdd = vdd+1;
        }
        else {
            puts("F");
            nop = nop + 1;
        }
    }
    perc=(vdd/sizeof(a))*100;
    cout << "True: " << vdd << endl;
    cout << "False: " << nop << endl;
    cout << "% of True: " << setprecision(6) << perc << endl;

}