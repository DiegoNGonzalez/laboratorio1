//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°: 1
//EJ N°: 2
/*Comentarios
Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

*/

#include <iostream>
using namespace std;

int main(void){
    int n1, n2, aux;
    cout << "Ingrese un numero : ";
    cin >> n1;
    cout <<"Ingrese otro numero: ";
    cin >> n2;
    aux = n1;
    n1= n2;
    n2= aux;
    cout << n1 << " " << n2;
	return 0;

}
