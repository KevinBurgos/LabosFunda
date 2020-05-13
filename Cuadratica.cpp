#include "iostream"
#include "cmath"
using namespace std;
int main(void)
{
    float a, b, c, b1, discriminante, x, y, z, dividendo, R1, R2, Respuesta1, Respuesta2;
    cout << "Encontrando el resultado de la cuadratica." << endl;
    cout << "introduzca el valor de a";
    cin >> a;
    cout << "introduzca el valor de b";
    cin >> b;
    cout << "introduzca el valor de c";
    cin >> c;
    b1 =-b;
    x = pow(b ,2);
    y = 4 * a *c;   
    z = x - y;
    discriminante = sqrt(z);
    dividendo = 2*a;
    R1 = b1 + discriminante;
    R2 = b1 - discriminante;
    Respuesta1 = R1/dividendo;
    Respuesta2 = R2/dividendo;
    cout << "El conjunto solucion es:{" << Respuesta1 << "," << Respuesta2 << "}" << endl;
}