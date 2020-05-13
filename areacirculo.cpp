#include "iostream"
#include "cmath"
using namespace std;
int main(void)
{
    float radio, area, perimetro;
    cout << "Encontraremos el Area y el Perimetro del circulo." << endl;
    cout << "introduzca el valor del radio";
    cin >> radio;
    area = M_PI* pow(radio,2);
    perimetro = 2*M_PI * radio;
    cout << "El Area del circulo es:" << area << endl;
    cout << "El Perimetro del circulo es:" << perimetro  << endl;
}
