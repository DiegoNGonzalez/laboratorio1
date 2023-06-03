//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:3
//EJ N°:8
/* Comentarios
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo

*/

#include <iostream>
using namespace std;

int main(void)
{
    const int CANT_EMPLEADOS=10;
    int legajo, legajoMax, i=0;
    float sueldo, sueldoMax;
    bool primerIngreso = false;

    for(i; i< CANT_EMPLEADOS; i++)
    {
        cout << "Ingrese el numero de legajo: ";
        cin >> legajo;
        cout <<"Ingrese el sueldo del empleado: ";
        cin >> sueldo;

        if(primerIngreso==false){
            sueldoMax=sueldo;
            legajoMax=legajo;
            primerIngreso=true;
        };

        if(sueldo > sueldoMax){
            sueldoMax=sueldo;
            legajoMax=legajo;
        }
    };

    cout << "El numero de legajo del empleado con mayor sueldo es: "<<legajoMax;
    return 0;

}
