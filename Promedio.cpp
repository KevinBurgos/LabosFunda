#include "iostream"
using namespace std;
int main(void)
{
    int num1, num2, num3, sum;
    float a = 3, prom;
    cout << "Encontrar el Pomedio de 3 numeros." << endl;
    cout << "Introduzca el primer valor:";
    cin >> num1;
    cout << "Introduzca el segundo valor:";
    cin >> num2;
    cout << "Introduzca el tercer valor:";
    cin >> num3;
    sum = num1+num2+num3;
    prom = sum/a;
    cout << "El promedio de los tres valores es:" << prom;
}
