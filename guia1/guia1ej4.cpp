//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avi�n
y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupaci�n y el porcentaje de
no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupaci�n que
se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.


*/

#include <iostream>
using namespace std;

int main(void){
    int asientosTotales, asientosVendidos, porcentajeOcupado, PorcentajeVacio, cienPorCiento= 100;
    cout <<"Ingrese cantidad de asientos disponibles: ";
    cin >> asientosTotales;
    cout <<"Ingrese cantidad de asientos ocupados: ";
    cin >> asientosVendidos;
    porcentajeOcupado = (asientosVendidos * 100) / asientosTotales;
    PorcentajeVacio= cienPorCiento - porcentajeOcupado;
    cout <<"El porcentaje de ocupacion es " << porcentajeOcupado <<"%"<<" y el porcentaje no ocupado es "<< PorcentajeVacio<< "%.";

	return 0;

}
