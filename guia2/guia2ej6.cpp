//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:6
/* Comentarios
Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada. Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.

*/

#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    cout <<"Ingrese 3 numeros: "<< endl;
    cin >> a >> b >> c;
    if(a== b && b==c){
        cout <<"Los tres numeros son iguales.";
    }
	return 0;

}
