//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia absoluta entre ambos. Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5. Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.

*/

#include <iostream>
using namespace std;

int main(void){
    int n1, n2, resultado;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese otro numero: ";
    cin >> n2;

    if(n1>n2){
        resultado = n1 - n2;
    }else{
        resultado = n2-n1;
    };
    cout << "La diferencia absoluta entre ambos numeros es: "<<resultado;
	return 0;

}
