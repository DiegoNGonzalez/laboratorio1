//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:10
/* Comentarios
Hacer un programa para ingresar cinco números y listar el máximo de ellos.

 */

#include <iostream>
using namespace std;

int main(void)
{
    float num1,num2,num3,num4,num5, maximo;
    cout <<"Ingrese 5 numeros: ";
    cin >> num1>>num2>> num3>> num4>>num5;

    maximo = num1;

    if(maximo < num2){
        maximo = num2;
    };
    if(maximo <num3){
        maximo = num3;
    };
    if(maximo <num4){
        maximo = num4;
    };
    if(maximo <num5){
        maximo = num5;
    };

    cout << "El numero mayor es: " << maximo;

    return 0;

}
