//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:7
/* Comentarios
Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada. Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
 */

#include <iostream>
using namespace std;

int main(void){
    int a ,b,c;
    cout <<"Ingrese el primer numero: ";
    cin >> a;
    cout <<"Ingrese el siguiente numero: ";
    cin >> b;
    cout <<"Ingrese el ultimo numero: ";
    cin >> c;
    if(a!=b && b!=c && a!=c){
        cout<<"Los tres numeros son distintos entre si.";
    };
	return 0;

}
