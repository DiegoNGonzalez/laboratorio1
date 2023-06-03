//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:3
//EJ N°:7
/* Comentarios
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.

*/

#include <iostream>
using namespace std;

int main(void)
{
    const int MAS_CINCUENTA = 50000, CANT_EMPLEADOS=10;
    float sueldo, sueldoMax, sueldoMin, totalSueldos, promedio;
    int i =0, sueldosMasCincuentaMil=0;

    cout << "Ingrese el sueldo: ";
    cin >> sueldo;

    sueldoMax = sueldo;
    sueldoMin=sueldo;
    totalSueldos+=sueldo;

    for(i; i<9; i++){

        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
        totalSueldos+=sueldo;
        if(sueldo <sueldoMin){
            sueldoMin=sueldo;
        };
        if(sueldo >sueldoMax){
            sueldoMax=sueldo;
        };
        if (sueldo >MAS_CINCUENTA){
            sueldosMasCincuentaMil++;
        }


    };

    promedio = totalSueldos/CANT_EMPLEADOS;

    cout <<"El sueldo mas alto es de: $"<<sueldoMax<<endl;
    cout <<"El sueldo mas bajo es de: $"<<sueldoMin<<endl;
    cout <<"El sueldo promedio es de: $"<<promedio<<endl;
    cout <<"Hay "<<sueldosMasCincuentaMil <<" empleados que cobran mas de $50000"<<endl;



    return 0;

}
