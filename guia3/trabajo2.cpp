//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Durante la Edad Media existía un popular juego de dados llamado Nomis. El juego consistía en tirar dos dados de seis caras durante cinco rondas. En cada ronda se debía anotar la diferencia absoluta entre las caras de los dados obtenidos en la tirada. Esta diferencia absoluta se utiliza para calcular el puntaje a partir de las siguientes reglas:
Si en una ronda se obtienen dos dados con la cara 1 o dos dados con la cara 6: El puntaje de esa ronda es de 10 puntos.
Cualquier diferencia absoluta mayor a uno: El puntaje de esa ronda es igual a la diferencia absoluta.
Cualquier escalera: El puntaje de la ronda es cero y se pierde el total acumulado hasta el momento.

NOTA: Una escalera es cualquiera de las siguientes combinaciones sin importar el orden de los dados (1-2, 2-3, 3-4, 4-5, 5-6, 1-6)

El juego debe pedir en cada ronda el valor de los dos dados y mostrar el puntaje de la ronda y el puntaje acumulado. Al finalizar las cinco rondas debe mostrar el puntaje acumulado.

*/

#include <iostream>
using namespace std;

int main(void){
    int puntaje_acumulado = 0;
    for (int i = 1; i <= 5; i++) {
        int dado1, dado2;
        cout << "Ronda " << i << endl;
        cout << "Ingresa el valor del primer dado: ";
        cin >> dado1;
        cout << "Ingresa el valor del segundo dado: ";
        cin >> dado2;

        int diferencia;
        int puntaje_ronda = 0;

        if(dado1>dado2){
            diferencia = dado1 -dado2;
        }else{
            diferencia = dado2-dado1;
        }


        if (dado1 == 1 && dado2 == 1 || dado1 == 6 && dado2 == 6) {
            puntaje_ronda = 10;
        } else if (diferencia > 1 && diferencia <5) {
            puntaje_ronda = diferencia;
        } else if (diferencia == 1 || diferencia ==5) {
            puntaje_ronda = 0;
            puntaje_acumulado = 0;
        } else {
            puntaje_ronda = diferencia;
        }
        puntaje_acumulado += puntaje_ronda;
        cout << "Puntaje de la ronda: " << puntaje_ronda << endl;
        cout << "Puntaje acumulado: " << puntaje_acumulado << endl;
    }
    cout << "Puntaje final: " << puntaje_acumulado << endl;
	return 0;

}
