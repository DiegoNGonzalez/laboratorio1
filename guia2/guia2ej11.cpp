//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°:11
/* Comentarios */

#include <iostream>
using namespace std;

int main(void){
    float num1,num2,num3,num4,num5;
    int contador=0;

    cout <<"Ingrese 5 numeros: " <<endl;
    cin >>num1>>num2>>num3>>num4>>num5;

    if(num1 > 0){
        contador++;
    };
    if(num2 > 0){
        contador++;
    };
    if(num3 > 0){
        contador++;
    };
    if(num4 > 0){
        contador++;
    };
    if(num5 > 0){
        contador++;
    };

    cout <<"La cantidad de numeros positivos es: "<< contador;
	return 0;

}
