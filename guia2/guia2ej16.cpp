//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:2
//EJ N�:16
/* Comentarios
Hacer un programa para ingresar por teclado cuatro n�meros. Si los valores que se ingresaran est�n ordenados en forma creciente, emitir el mensaje �Conjunto Ordenado�, caso contrario emitir el mensaje: �Conjunto Desordenado�.
Ejemplo 1: si los n�meros que se ingresan son 8, 10, 12 y 14, entonces est�n ordenados.
Ejemplo 2: si los n�meros que se ingresan son 8, 12, 12 y 14, entonces est�n ordenados. Ejemplo 3: si los n�meros que se ingresan son 10, 8, 12 y 14, entonces est�n desordenados.

*/

#include <iostream>
using namespace std;

int main(void){
    float n1,n2,n3,n4;

    cout <<"Ingrese 4 numeros: ";
    cin >> n1>>n2>>n3>>n4;

    if(n1<= n2 && n2<= n3 && n3<= n4){
        cout <<"Conjunto ordenado";
    }else if(n1 > n2 || n2 > n3 || n3 > n4){
        cout <<"Conjunto desordenado";
    }
	return 0;

}
