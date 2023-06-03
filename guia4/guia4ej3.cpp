//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios

Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo: 35 - Posici�n: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo: 55 - Posici�n: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listar� M�ximo: -5 - Posici�n: 1.
*/

#include <iostream>
using namespace std;

int main(void)
{
    int numero;
    int maximo;
    bool corte=true;
    cout << "Ingrese un n�mero: ";
    cin >> numero;
    maximo= numero;
    while (corte)
    {
        cout << "Ingrese un n�mero: ";
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

    cout << "M�ximo: " << maximo << endl;

    return 0;

}
