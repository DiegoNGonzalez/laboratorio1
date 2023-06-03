//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°:16
/* Comentarios
Hacer un programa para ingresar una letra en mayúsculas en una variable de tipo char y mostrar cuántas letras de diferencia hay en el alfabeto con respecto a la 'A'.
Ejemplo:
Si el usuario ingresa la letra C. Hay dos letras de diferencia con respecto a la A.

Recomendación:
Tratar de no googlear la solución. Si no sale, dejarlo decantar y probar muchas variantes.

*/

#include <iostream>
using namespace std;

int main(void){
    char letra;
    int diferencia;
    cout << "Ingrese una letra en mayuscula: ";
    cin >> letra;
    diferencia = letra - 'A';
    cout << "Hay " << diferencia << " letras de diferencia con respecto a la A.";
	return 0;

}
