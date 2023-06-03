//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
$ 10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$ 12 por kW por el consumo excedente de 101 a 200 kW.
$ 15 por kW por el consumo excedente de 201 kW en adelante.

Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el programa calcule e informe el total a pagar por el mismo.
Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $ 10 x 100 + $ 12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950.

*/

#include <iostream>
using namespace std;

int main(void){
    int consumo, precio, kwMenorAcien=10, kwMenorADoscientos=12, kwMayorADoscientos=15;

    cout <<"Ingrese la cantidad de kw consumidos: ";
    cin >>consumo;

    if(consumo <=100 ){
        precio= consumo * kwMenorAcien;
    }else if(consumo > 100 && consumo <= 200){
        precio = (100 * kwMenorAcien) +(consumo%100 *kwMenorADoscientos);
    }else if (consumo > 200){
        precio= (100*kwMenorAcien)+ (100*kwMenorADoscientos) + (consumo%200 * kwMayorADoscientos);
    }


    cout <<"El precio a pagar por "<<consumo<<"kW es $"<<precio<<".";
	return 0;

}
