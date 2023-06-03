//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios

Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor a 10. Calcular e informar:
La cantidad de números que componen la lista.

Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7
*/

#include <iostream>
using namespace std;

int main(void)
{
    int numero, diferencia=0, maximo, minimo, cantidadLista=0;
    bool band= false;
    cout <<"Ingrese un numero: ";
    cin >> numero;
    maximo=numero;
    cantidadLista++;
    while(diferencia<10)
    {
        cantidadLista++;

        cout <<"Ingrese un numero: ";
        cin >> numero;
        if(numero>maximo){
                if(band==false){
                minimo=maximo;
                maximo=numero;
                band=true;
                }else{
                maximo= numero;
                }

        }else if(numero<minimo){
            minimo = numero;
        }
        diferencia= maximo-minimo;
    }
    cout <<"Cantidad de numeros: "<< cantidadLista;
    return 0;

}
