//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:12
/* Comentarios
Hacer un programa para leer tres números diferentes y determinar e informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.

*/

#include <iostream>
using namespace std;

int main(void){
    float num1,num2,num3;
    int maximo, medio;

    cout <<"Ingrese 3 numeros: ";
    cin >> num1>>num2>>num3;

    if (num1> num2){
        maximo = num1;
        medio = num2;
    }else{
        maximo=num2;
        medio= num1;
    };
    if(medio<num3 && num3 < maximo){
        medio = num3;
    };

    cout <<"El numero del medio es: "<< medio;


	return 0;

}
