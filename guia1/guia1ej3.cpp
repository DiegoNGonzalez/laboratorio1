//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°: 3
/* Comentarios
Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.


*/

#include <iostream>
using namespace std;

int main(void){
    int sueldoFijo= 15000, premio= 2000, cantAutos, sueldoTotal;
    cout <<"Ingrese cantidad de autos vendidos: ";
    cin >> cantAutos;
    sueldoTotal = sueldoFijo + (premio* cantAutos);
    cout << "El suelto total a pagar es: $" <<sueldoTotal <<endl;

	return 0;

}
