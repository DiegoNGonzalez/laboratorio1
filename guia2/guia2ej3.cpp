//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.

*/

#include <iostream>
using namespace std;

int main(void){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if(numero %2 == 0){
        cout << "El numero es par.";
    }else{
        cout << "El numero es impar";
    }
	return 0;

}
