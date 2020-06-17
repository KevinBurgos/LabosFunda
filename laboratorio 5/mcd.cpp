#include "iostream"
using namespace std;
int main(void)
{
    int numM, numm, x;

    cout << "MCD de dos numeros enteros." << endl << endl;
    cout << "Ingrese el numero mayor: ";
    cin >> numM;
    cout << "ingrese el numero menor: ";
    cin >> numm;
    
    do
    {
        x = numM % numm;
        if (x != 0)
        {
            numM = numm;
            numm = x;
        }
    }
    while (x != 0);
    cout << "El MCD de los dos numeros es: " << numm << endl << endl;
}

// trate de hacerlo distinto pero no encontre otra mejor forma xD