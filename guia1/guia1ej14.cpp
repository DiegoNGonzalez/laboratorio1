//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°:14
/* Comentarios
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
Ejemplo:
Importe  : 4500
Descuento: 40
Importe    : $ 4500
Descuento  : $ 1800
Total      : $ 2700

*/

#include <iostream>
using namespace std;

int main(void){
    int importe, importeADescontar, total;
    float descuento;
    cout <<"Ingrese el importe: ";
    cin >>importe;
    cout<<"Ingrese el descuento a aplicar: ";
    cin>>descuento;
    total= importe -(importe *(descuento/100));
    importeADescontar= importe - total;
    cout <<"Importe: $"<<importe <<endl<<"Descuento: $"<<importeADescontar<<endl<<"Total: $"<<total<<endl;
	return 0;

}
