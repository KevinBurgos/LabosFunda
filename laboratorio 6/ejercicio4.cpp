#include "iostream"
using namespace std;

void llenarprimero(int a[], int a1, int i);
void llenarsegundo(int b[], int a1, int i);
void llenartercero(int c[], int a[], int b[], int a1, int i);

int main(void)
{
    int a[100], a1, b[100], c [100], i = 0;
    cout << "Tercer arreglo con la suma de dos arreglos" << endl << endl;
    cout << "Ingresar el limite de los arreglos: ";
    cin >> a1;
    llenarprimero(a, a1, i);
    llenarsegundo(b, a1, i);
    llenartercero(c, a, b, a1, i);
}
void llenarprimero(int a[], int a1, int i)
{
    cout << "Digite los " << a1 << " datos del primer arreglo:" << endl;
    for(i = 0; i < a1; i++)
    cin >> a[i];
}
void llenarsegundo(int b[], int a1, int i)
{
    cout << "Debe digitar los " << a1 << " datos del segundo arreglo:" << endl;
    for(i = 0; i < a1; i++)
    cin >> b[i];
}
void llenartercero(int c[], int a[], int b[], int a1, int i)
{   
    for (i = 0; i < a1; i++)
    c[i] = a[i] + b[i];
    cout << "La suma de los valores del arreglo es: "; 
    for ( i = 0; i < a1; i++)
    cout << " " << c[i];
}
