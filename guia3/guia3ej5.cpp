//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:3
//EJ N°:5
/* Comentarios
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos

*/

#include <iostream>
using namespace std;

int main(void){
    int i=0, cantidadNumeros, positivos=0, numeroIngresado;

    cout << "Ingrese un valor para la cantidad de numeros: ";
    cin >> cantidadNumeros;

    for(i; i<cantidadNumeros; i++){
        cout << "Ingrese un numero para la lista: " << endl;
        cin >> numeroIngresado;
        if(numeroIngresado >0){
            positivos++;
        };
    };

    cout <<"De la lista de "<< cantidadNumeros<<" numeros "<< positivos<<" son positivos.";
	return 0;

}
