#include "iostream"
using namespace std;
int main(void)
{
    int hora, minutos, segundos;

    cout << endl
         << "HORA UN SEGUNDO DESPUES" << endl
         << endl;
    cout << "Utilizando el sistema horario de 24 horas debera de escribir la hora que desee." << endl;
    cout << "Ingrese la hora ";
    cin >> hora;

    if (hora >= 24)
    {
        cout << "No puedes imgresar un numero mayor o igual a 24" << endl
             << "Deberas volver a iniciar el programa";
        return 0;
    }

    cout << "Ingrese los minutos ";
    cin >> minutos;

    if (minutos >= 60)
    {
        cout << "No puedes imgresar un numero mayor o igual a 60" << endl
             << "Deberas volver a iniciar el programa";
        return 0;
    }

    cout << "Ingrese los segundos ";
    cin >> segundos;

    if (segundos >= 60)
    {
        cout << "No puedes imgresar un numero mayor o igual a 60" << endl
             << "Deberas volver a iniciar el programa";
        return 0;
    }
    
    segundos++;

    if (segundos == 60)
    {
        minutos++;
        segundos = 00;
    }
    if (minutos == 60)
    {
        hora++;
        minutos = 00;
    }
    if (hora == 24)
    {
        segundos++;
        hora = 00;
    }

    if(hora == 0 && minutos == 0)
    {
        segundos = 0;
    }

    cout << endl
         << endl
         << "La hora es: " << hora << ":" << minutos << ":" << segundos;
}