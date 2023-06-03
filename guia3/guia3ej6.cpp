//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:3
//EJ N°:6
/* Comentarios
Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.

*/

#include <iostream>
using namespace std;

int main(void){
    int i=0, positivos=0,negativos=0, ceros=0;
    float numero;

    for(i;i<10; i++){
        cout <<"Ingrese un numero: ";
        cin >> numero;
         if (numero ==0){
            ceros++;
         }else if (numero >0){
            positivos ++;
         }else{
            negativos ++;
         };
    };

    cout <<"La cantidad de numeros positivos es: "<< positivos<<"."<<endl;
    cout <<"La cantidad de numeros negativos es: "<< negativos<<"."<<endl;
    cout <<"La cantidad de numeros iguales a cero es: "<< ceros<<"."<<endl;

	return 0;

}
