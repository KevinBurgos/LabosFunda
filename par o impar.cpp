#include "iostream"
using namespace std;
int main(void)
{
    int a, respuesta;
    cout << endl << "IDENTIFICAR SI UN NUMERO ES PAR O IMPAR. " << endl << endl;
    cout << "Ingrese el numero ";
    cin >> a;
    respuesta = a % 2;
    if (respuesta == 0)
                        cout << "Si es un numero par";
    else
    {
        cout << "No es un numero par";
    }
}