//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:1
/* Comentarios
Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.


*/

#include <iostream>
using namespace std;

int main(void){
    int numero;
    cout <<"Ingrese un numero: ";
    cin >>numero;
    if(numero == 0){
        cout <<"El numero ingresado es 0";
    }else if(numero > 0){
        cout <<"El numero ingresado es positivo.";
    }else{
        cout <<"El numero ingresado es negativo";
    };

	return 0;

}
