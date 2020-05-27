#include "iostream"
using namespace std;
int main(void)
{
    int n, k, p;
    cout << endl << "   VERIFICAR SI ES POSITIVO, NEGATIVO O CERO" << endl << endl;
    cout << "Ingresar el numero a verificar";
    cin >> n;
    cout << n;
    k = n >= 1 || n <= -1;
    p = n>=1;
    if (k)
    {
        if (p)
            cout << " Es un numero positivo";
        else 
            cout << " Es un numero negrativo";
    }
    else 
    {
        cout << " No es ni positivo ni negativo ";
    }
}