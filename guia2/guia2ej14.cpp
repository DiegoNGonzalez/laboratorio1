//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 pero que no sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero el año 2000 si lo es. Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es.

Ejemplo 1. Si se ingresa el año 2020 se indicará como bisiesto.
Ejemplo 2. Si se ingresa el año 2019 se indicará como no bisiesto.
Ejemplo 3. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto. Ejemplo 4. Si se ingresa el año 1600 o 2000 se indicará como bisiesto.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int anio;
    cout <<"Ingrese un año: ";
    cin >> anio;

    if(anio%4 == 0)
    {
        if(anio %100 == 0 && anio%400 !=0)
        {
            cout << "No bisiesto";
        }
        else
        {
            cout <<"Es Bisiesto";
        };
    }
    else
    {
        cout <<"No es bisiesto";
    }

    return 0;

}
