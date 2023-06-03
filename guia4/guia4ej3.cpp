//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios

Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo: 35 - Posición: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo: 55 - Posición: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listará Máximo: -5 - Posición: 1.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int numero;
    int maximo;
    bool corte=true;
    cout << "Ingrese un número: ";
    cin >> numero;
    maximo= numero;
    while (corte)
    {
        cout << "Ingrese un número: ";
        cin >> numero;

        if (numero == 0)
        {
            corte=false;
        }
        else if (numero > maximo)
        {
            maximo = numero;
        }
    }

    cout << "Máximo: " << maximo << endl;

    return 0;

}
