#include "iostream"
using namespace std;
int main(void)
{
    int anno, primera, segunda, tercera, comp1, comp2;
    bool bisiesto;
    
    cout << endl << "ANNO BISIESTO" << endl << endl;
    cout << "Ingrese el anno que quiere verificar" << endl;
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
   if (bisiesto == 1)
   {
       cout << "El anno es bisiesto";
   }
   else
   {
       cout << "El anno no es bisiesto";
   }
}