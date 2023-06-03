//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:9
/* Comentarios
Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main(void){
    float numero1, numero2, numero3, maximo;

    cout << "Ingrese 3 numeros: ";
    cin >> numero1 >> numero2 >> numero3;

    if(numero1 > numero2){
        maximo = numero1;
    }else{
        maximo = numero2;
    };

    if(maximo < numero3){
        maximo = numero3;
    };

    cout <<"El numero mayor es: " << maximo;
	return 0;

}
