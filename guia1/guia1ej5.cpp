//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores
vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.

*/

#include <iostream>
using namespace std;

int main(void){
    int a, b, c, cantTotal;
    float cienPorCien = 100,porcentajeA, porcentajeB, porcentajeC;
    cout <<"Ingrese cantidad de alfajores A: ";
    cin >> a;
    cout <<"Ingrese cantidad de alfajores B: ";
    cin >> b;
    cout <<"Ingrese cantidad de alfajores C: ";
    cin >> c;
    cantTotal = a+b+c;
    porcentajeA= ((float)a * 100) /cantTotal ;
    porcentajeB = ((float)b*100) / cantTotal;
    porcentajeC = cienPorCien - porcentajeA -porcentajeB;

    cout << "El porcentaje de alfajores A es "<< porcentajeA<<"%." <<endl;
    cout << "El porcentaje de alfajores B es "<< porcentajeB<<"%." <<endl;
    cout << "El porcentaje de alfajores C es "<< porcentajeC<<"%." <<endl;
	return 0;

}
