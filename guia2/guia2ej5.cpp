//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Un negocio de perfumería efectúa descuentos según el importe de la venta. - Si el importe es menor a $100 aplicar un descuento del 5% - Si el importe es entre $100 y hasta $500 aplicar un descuento del 10% - Si el importe es mayor a $500 aplicar un descuento del 15% Hacer un programa donde se ingresa el importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.

*/

#include <iostream>
using namespace std;

int main(void){
    float importe, importeConDescuento;
    cout << "Ingrese el importe de venta: ";
    cin >> importe;
    if(importe >500){
        importeConDescuento= importe * 0.85;

    }else if(importe >= 100){
        importeConDescuento= importe * 0.90;

    }else{
        importeConDescuento= importe * 0.95;
    };

    cout << "El importe final con descuento es: $" << importeConDescuento;
	return 0;

}
