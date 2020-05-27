#include "iostream"
using namespace std;
int main(void)
{
    int x, y, resul;
    cout << endl << "VERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO." << endl << endl;
    cout << "Ingresar el primer numero:";
    cin >> x;
    cout << endl << "Ingresar el segundo numero:";
    cin >> y;
    resul = x % y;
    if( resul== 0)
                cout << "El  numero " << x << " es divisible entre " << y;
    else
    {
        cout << "El numero " << x << " no es divisible entre " << y;
    }
}