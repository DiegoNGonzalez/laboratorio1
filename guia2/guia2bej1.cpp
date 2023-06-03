//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2B
//EJ N°:1
/* Comentarios
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:

Nombre Tipo Valor hora
C/C++  'C'  $ 2500
C#     '#'  $ 2100
Python 'P'  $ 1400
Go     'G'  $ 2000

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.

Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool).
*/

#include <iostream>
using namespace std;

int main(void){
    const int horaC= 2500, horaCSharp= 2100, horaPython= 1400, horaGo =2000;
    int horas, precio;
    char tipoLenguaje;
    bool urgente;

    cout <<"Ingrese cantidad de horas: ";
    cin >>horas;
    cout <<"Ingrese el caracter segun lenguaje a desarrollar, C para C/C++, # para C#, P para Python y G para Go: ";
    cin >> tipoLenguaje;
    cout<<"Si el proyecto es urgente ingrese 1, de lo contrario ingrese 0: ";
    cin >> urgente;

    if(tipoLenguaje == 'C'){
        precio = horas * horaC;
    }else if (tipoLenguaje =='#'){
        precio = horas * horaCSharp;
    }else if(tipoLenguaje == 'P'){
        precio = horas * horaPython;
    }else{
        precio = horas * horaGo;
    }

    if(urgente == true){
        precio = precio * 2.2;
    }

    cout <<"El costo total del proyecto es $"<<precio;
	return 0;

}
