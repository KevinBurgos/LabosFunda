#include "iostream"
using namespace std;
void  cuenta ( int arregloa[], int t, int n)
{
    int x = 0;
    int z;
    for ( int i = 0; i < t; i++)
    {
        if(n == arregloa[i])
        {
            x++;
            z = arregloa[i];
        }
    }
    cout << endl << "El numero  " << z << " se repite " << x << " veces";   
}

int main (void)
{
    int arregloa[10] = {1,1,1,4,9,4,2}, i, n;
    cout << "Contador de repeticiones de numeros en el arreglo." << endl;
    cout << "los valores que tiene el arreglo son: " ;
    for (i = 0; i < 7; i++)
    {
        cout << arregloa[i] << " " ;
    }
    for (i = 0; i < 7; i++)
    {
     n = arregloa[i];
     if( n != 0 )
     {
         cuenta(arregloa, 7,  n); 
     }
    }
}