//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°:7
/* Comentarios
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma
 y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800.

 */

#include <iostream>
using namespace std;

int main(void){
    int precio;
    float descuento, porcentaje, total;
    cout <<"Ingrese el importe de venta: ";
    cin >> precio;
    cout <<"Ingrese el porcentaje de descuento: ";
    cin >> descuento;
    porcentaje = 1 -(descuento /100);
    total= precio * porcentaje;
    cout <<"El precio a pagar es $" <<total;

	return 0;

}
