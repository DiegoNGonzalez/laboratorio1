//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.

*/

#include <iostream>
using namespace std;

int main(void){
    int n1, n2;
    cout <<"Ingrese un numero: ";
    cin >>n1;
    cout <<"Ingrese otro numero: ";
    cin >>n2;
    if(n1%n2 == 0){
        cout <<"El primer numero es multiplo del segundo";
    }else{
        cout<<"No son multiplos ";
    };
	return 0;

}
