//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios
Nro de ejercicio: parcial Viernes TN (modelo de parcial)
Consigna: La cl�nica San Sim�n Protector dispone de la informaci�n de los �ltimos turnos de sus enfermeros/as.
Por cada turno trabajado por un enfermero se registr� la siguiente informaci�n:
�    Legajo del enfermero/a (entero entre 1000 y 15000)
�    N�mero de turno (entero)
�    Horario ('M' - Ma�ana, 'T' - Tarde, 'N' - Noche)
�    Cantidad de horas trabajadas en el turno (entero mayor a cero)

La informaci�n se encuentra agrupada por legajo de enfermero. No todos los enfermeros trabajaron la
misma cantidad de turnos.
Para indicar el fin de los registros de un enfermero se ingresa un n�mero de turno igual a cero.
Para indicar el fin del lote de datos se
ingresa un legajo de enfermero negativo.

Notas
�    Cada turno consiste en 8 horas. Las horas excedentes se consideran horas extras. Por ejemplo:
Si un enfermero trabaj� 12 horas en
un turno, realiz� 8 hs regulares y 4 hs extra. En cambio, si trabaj� 6 horas en un turno: realiz� 6 hs
regulares y 0 hs extra.

Se pide hacer un programa en C++ para calcular e informar

A)    Por cada enfermero, el promedio de horas trabajadas por turno en el horario de la noche.
    30
B)    La cantidad total de horas extras realizadas entre todos los enfermeros.
    20
C)    La cantidad de enfermeros que realizaron al menos un turno en los tres horarios (ma�ana, tarde y noche).
    30
D)    El horario (ma�ana, tarde o noche) que haya registrado menor cantidad de horas trabajadas
    20
Aclaraciones


�    S�lo habr� un horario que haya registrado la menor cantidad de horas trabajadas.



*/

#include <iostream>
using namespace std;

int main(void){
    int legajo,nroTurno,horas;
    char horario;


    cout << "Ingrese el numero de legajo del enfermero: "<<endl;
    cin >>legajo;
    while(legajo >=0){
        cout <<"Ingrese el numero de turno: "<<endl;
        cin>>nroTurno;
        while(nroTurno != 0){
            cout <<"Ingrese el horario: ('M' - Ma�ana, 'T' - Tarde, 'N' - Noche)"<<endl;
            cin>>horario;
            horario=toupper(horario);
            cout <<"Ingrese la cantidad de horas trabajadas: "<<endl;
            cin>>horas;
            switch(horario){
                case 'M':
                    break;
                case 'T':
                    break;
                case 'N':


            }
        }


    }






	return 0;

}
