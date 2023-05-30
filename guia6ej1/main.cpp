///Diego nicolas gonzalez valenzuela
///guia 6
///ejercicio 1
///Comentarios
/**

Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.


**/





#include <iostream>

using namespace std;

int main()
{
    int lista[10]={};
    int contador=0, i;

    for(i=0; i<10; i++){
        cout<< "Ingrese un numero entero: ";
        cin >> lista[i];

    }

    cout <<"Los numeros positivos son:"<<endl;
    for(i=0;i<10;i++){

        if(lista[i] >0){
            cout << "Posicion #"<<i<<": "<<lista[i]<<endl;
        }
    }

    return 0;
}
