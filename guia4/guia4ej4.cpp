//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios */

#include <iostream>
using namespace std;

int main() {
    int num, maximo; // inicializamos maximo con el valor m�nimo posible
    cout << "Ingrese una lista de n�meros (finaliza con 0):" << endl;
    cin >> num;
    if (num % 2 == 0 && num > maximo) {
            maximo = num;
        }
    while (num != 0) {
        cin >> num;
        if (num % 2 == 0 && num > maximo) {
            maximo = num;
        }
    }
        cout << "El m�ximo de los n�meros pares es: " << maximo << endl;
    }
    return 0;
}
