//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios
Hacer un programa para mostrar por pantalla los n�meros del 1 al 20 salteando de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.

Importante: El programa no tiene ning�n ingreso de datos.

*/

#include <iostream>
using namespace std;

int main(void){
    int i=1;

    for(i;i<20;i=i+3){
        cout << i << endl;
    };
	return 0;

}
