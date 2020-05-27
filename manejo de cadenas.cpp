#include "iostream"
#include "string.h"

using namespace std;
int main(void)
{
    int a;
    string palabra;
    cout << endl << "CALCULAR EL LARGO, SI ES PAR O NO DE LA CADENA" << endl << endl;
    cout << "ingresar la cadena de texto que quiere ser evaluada:";
    cin >> palabra;
    a = palabra.length();
    cout << a;
    if( a > 10)
         cout << " Es el total de caracteres y es es mayor a 10" << endl;
    else
        cout << "Es el total de caracteres, es menor o igual a 10" << endl;

    if (a % 2 == 0)
            cout << "Es un numero par" << endl;
    else
        cout << "Es un numero impar" << endl;
}
