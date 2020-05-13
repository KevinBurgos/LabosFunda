#include "iostream"
using namespace std;
int main(void)
{
    string producto;
    float precio, cantidad, total;
    cout << "Contador de total, segun producto, precio y cantidad." << endl;
    cout << "ingresar nombre del producto:";
    cin >> producto;
    cout << "ingresar el precio del producto:";
    cin >> precio;
    cout << "ingresar numero total de productos comprados:";
    cin >> cantidad;
    total = precio * cantidad;
    cout << "Usted ha comprado un total de:" << total << "$";
}