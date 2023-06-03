//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios
Problema 1
Se desea un programa que permita ingresar una cantidad de horas por teclado. Luego, a partir de las horas ingresadas el sistema debe mostrar por pantalla:
Una D por cada día que se pueda expresar con dicha cantidad de horas.
Una M por cada mes (grupo de 30 días) que se pueda expresar con dicha cantidad de horas.
Una A por cada año (grupo de 365 días) que se pueda expresar con dicha cantidad de horas.

Por ejemplo, si se ingresa 1584 horas el sistema debe indicar:
DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD  MM

*/


/*
Solicitamos el ingreso de horas y la guardamos en una variable del tipo int. Declaramos variables para dia, mes y año. Por cada una de las variables hacemos un ciclo for, que recorra hasta dia, mes y año respectivamente y en cada vuelta imprima la letra correspondiente.




*/

#include <iostream>
using namespace std;

int main(void)
{
    int horas, dias, meses, anios;
    string total="";

    cout << " Ingresar cantidad de horas: ";
    cin >> horas;

    dias= horas/24;
    meses= dias/30;
    anios= dias/365;

    for(int i =0;i< dias; i++){
        total += 'D';
    };
    for(int i= 0;i< meses; i++){
        total += 'M';
    };
    for(int i =0;i< anios; i++){
        total += 'A';
    };
    cout << total;
    return 0;

}
