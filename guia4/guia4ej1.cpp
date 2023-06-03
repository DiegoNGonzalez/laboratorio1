//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios

Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.

Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
*/

#include <iostream>
using namespace std;

int main(void){
    float numero;
    int contadorPositivo=0, contadorNegativo=0;
    bool corte= true;

    while(corte){
        cout <<"Ingrese un numero: ";
        cin >> numero;
        if(numero== 0){
            corte=false;
        }else if(numero>0){
            contadorPositivo++;
        }else{
            contadorNegativo++;
        }
    }

    cout <<"Positivos: "<< contadorPositivo<<endl;
    cout <<"Negativos: "<< contadorNegativo<<endl;
	return 0;

}
