#include "iostream"
using namespace std;
int main(void)
{
    long dia, dia2, mes, mes2, anno, anno2, primera, segunda, tercera, comp1, comp2, a;
    bool bisiesto = false;
    cout << endl
         << "FECHA DEL DIA SIGUIENTE" << endl
         << endl;
    cout << "Debes de ingresar el anno, mes y dia correspondientemente. " << endl;
    //
    cout << "Ingrese el anno: ";
    cin >> anno;
    primera = anno % 400;
    segunda = anno % 4;
    tercera = anno % 100;
    if (primera == 0)
    {
        comp1 = 0;
        comp2 = 0;
    }
    else
    {
        if (segunda == 0 && tercera != 0)
        {
            comp1 = 0;
            comp2 = 0;
        }
        else
        {
            comp1 = 1;
            comp2 = 0;
        }
    }
    bisiesto = comp1 == comp2;  
    //
    cout << "Ingresa el mes: ";
    cin >> mes;
    if (mes > 12)
    {
        cout << "No puede ingresar mas de 12 meses." << endl
             << "El Programa se cerro, debera iniciarlo de nuevo.";
        return 0;
    }
    //
    switch (mes)
    {
    //
    case 1:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 31)
        {
            cout << "No puede ingresar mas de 31 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
        
        if(dia2 > 31)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 2:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (bisiesto == 1)
        {
            if (dia > 29)
            {
                cout << "No puede ingresar mas de 29 dias debido a que es un anno bisiesto." << endl
                     << "El Programa se cerro, debera iniciarlo de nuevo.";
                return 0;
            }
        
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
        
        if(dia2 > 29)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        }
        if (bisiesto == 0)
        {
            if (dia > 28)
            {
                cout << "No puede ingresar mas de 28 dias." << endl
                     << "El Programa se cerro, debera iniciarlo de nuevo.";
                return 0;
            }
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
                
        if(dia2 > 28)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;

    case 3:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 31)
        {
            cout << "No puede ingresar mas de 31 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
                
        if(dia2 > 31)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 4:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 30)
        {
            cout << "No puede ingresar mas de 30 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
                
        if(dia2 > 30)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 5:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 31)
        {
            cout << "No puede ingresar mas de 31 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
                
        if(dia2 > 31)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 6:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 30)
        {
            cout << "No puede ingresar mas de 30 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
                
        if(dia2 > 30)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 7:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 31)
        {
            cout << "No puede ingresar mas de 31 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;
                
        if(dia2 > 31)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 8:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 31)
        {
            cout << "No puede ingresar mas de 31 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;             
        if(dia2 > 31)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 9:
        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 30)
        {
            cout << "No puede ingresar mas de 30 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;             
        if(dia2 > 30)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 10:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 31)
        {
            cout << "No puede ingresar mas de 31 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;             
        if(dia2 > 31)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 11:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 30)
        {
            cout << "No puede ingresar mas de 30 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;             
        if(dia2 > 30)
        {
            dia2 = 1;
            mes2 = mes+ 1;
        }
        break;
    case 12:

        cout << "Ingresa el dia: ";
        cin >> dia;
        if (dia > 31)
        {
            cout << "No puede ingresar mas de 31 dias." << endl
                 << "El Programa se cerro, debera iniciarlo de nuevo.";
            return 0;
        }
        dia2 = dia + 1;
        mes2 = mes;
        anno2 = anno;             
        if(dia2 > 31)
        {
            dia2 = 1;
            mes2 = mes+ 1;
            if(mes2 > 12)
            {
                mes2 = 1;
                anno2 = anno + 1;
            }
        }
        break;
    }
    cout << "La fecha que usted ingreso es: " << anno << "/" << mes << "/" << dia << endl << endl;
    cout << "La feacha que usted ingreso un dia despues es: " << anno2  << "/" << mes2 << "/" << dia2 << endl << endl;
    return 0;
}