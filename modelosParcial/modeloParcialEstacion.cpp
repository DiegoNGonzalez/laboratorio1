//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios
Una estaci�n de servicio dispone de la informaci�n de los �ltimos 10 turnos realizados por
sus empleados. Por cada venta de combustible dispone de la siguiente informaci�n:
- N�mero de turno (Desde 1 hasta 10)
- Legajo del empleado (entero)
- Tipo de combustible (Desde 1 hasta 3)
- Litros despachados (real)
- Importe de la venta (real)
La informaci�n se encuentra agrupada por n�mero de turno (no necesariamente ordenada).
Para indicar el fin de la carga de datos de un turno se ingresa un n�mero de legajo de
empleado igual a 0.
Se pide calcular e informar:
A) El porcentaje sobre el total de litros de combustibles despachados discriminado por tipo
de combustible.
Ejemplo:
Combustible 1: 50%
Combustible 2: 10.5%
Combustible 3: 39.5%
B) Los tipos de combustibles que no se despacharon en el turno nro 3.
C) Por cada turno, el promedio de litros despachados por venta.
D) El n�mero de turno que m�s haya facturado en total. Indicar tambi�n el total facturado.
E) La cantidad de ventas en las que no se hayan despachado m�s de 15 litros.
ACLARACIONES: No habr� m�s de un turno con la mayor facturaci�n total.

*/

#include <iostream>
using namespace std;

int main(void)
{
    int nroDeTurno, legajo, tipoCombustible, i;
    float litrosDespachados, importeDeVenta, totalLitros=0;


    for (i=0; i<10; i++)
    {
        cout <<"Ingrese numero de turno: "<<endl;
        cin >>nroDeTurno;
        cout <<"Ingrese numero de legajo: "<<endl;
        cin>>legajo;

        while(legajo!=0)
        {
            cout<<"Ingrese tipo de combustible(de 1 a 3): "<<endl;
            cin>>tipoCombustible;
            cout<<"Ingrese los litros despachados: "<<endl;
            cin>>litrosDespachados;
            cout<<"Ingrese el importe de la venta"<<endl;
            cin>>importeDeVenta;
            switch(tipoCombustible){

            case 1:
                combustible1+= litrosDespachados;
                totalLitros+=litrosDespachados;
                break;
            }


            cout <<"Ingrese numero de legajo: "<<endl;
            cin>>legajo;

        }



    }


















    return 0;

}
