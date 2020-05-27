#include "iostream"
using namespace std;
int main(void)
{
    int b, c;
    string palabra, a, d;
    cout << "COMPROBAR SI EMPIEZA CON LA MISMA LETRA Y TERMINA CON LA MISMA" << endl << endl;
    cout << "ingrese la palabra";
    cin >> palabra;
    a = palabra.substr(0, 1);
    b = palabra.length();
    c = b - 1;
    d = palabra.substr(c, 1);
    if (a == d)
        cout << "La palabra inicia y termina con la misma letra";
    else
        cout << "La palabra no inicia ni termina con la misma letra";
}
