//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios
Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario. Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.
*/

#include <iostream>
using namespace std;

int main(void){
    int i=1, x;

    cout << "Ingrese un numero positivo: ";
    cin >> x;

    for (i;i<=x; i++){
        cout << i<< endl;
    };

	return 0;

}
