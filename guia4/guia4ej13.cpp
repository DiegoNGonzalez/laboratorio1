//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    int nro=15, contador = 0;

    while (contador <= 519) {
        if (nro % 15 == 0 && nro % 3 == 0 && nro % 6 != 0) {
            contador++;
            cout <<"Posicion #"<<contador<<" numero: "<<nro<<endl;
            cout <<nro%6<<endl;
            if (contador == 520) {
                cout << "El número 520° simonírico es: " << nro << endl;
            }
        }
        nro++;
    }

    return 0;
}
