//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listará Máximo -5

 */

#include <iostream>
using namespace std;

int main(void){
    float numero, maximo;

        cout <<"Ingrese un numero: ";
        cin >> numero;
        maximo=numero;
    while(numero !=0){
        cout <<"Ingrese un numero: ";
        cin >> numero;
        if(numero>maximo){
            maximo=numero;
        }
    }
    cout <<"Maximo: "<< maximo;

	return 0;

}
