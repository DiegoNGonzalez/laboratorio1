//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:8
/* Comentarios
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.

*/

#include <iostream>
using namespace std;

int main(void){
    float ladoA, ladoB, ladoC;
    cout << "Ingrese la longitud del primer lado: ";
    cin >> ladoA;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> ladoB;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> ladoC;

    if(ladoA == ladoB && ladoB == ladoC){
        cout << "El triangulo es Equilatero.";
    }else if(ladoA != ladoB && ladoB != ladoC && ladoC != ladoA){
        cout << "El triangulo es Escaleno.";
    }else{
        cout << "El triangulo es Isoceles.";
    };

	return 0;

}
