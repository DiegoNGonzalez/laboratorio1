//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:Modelo Parcial 1
/* Comentarios
LaraKart es un torneo que se realiza todos los años en la Ciudad de Buenos Aires. Durante el lapso de un día los participantes pueden dirigirse a la pista de karting y realizar el circuito. Luego de que haya terminado el torneo se anunciará al ganador de la competencia.

El organizador del torneo prevé que la edición 2023 tendrá una gran cantidad de participantes. Cada participante realizará exactamente 4 vueltas a la pista de carrera, por cada vuelta de cada participante se registra:
Código de participante (entero)
Número de vuelta (1 a 4)
Tiempo empleado (en minutos)
Descalificado (1 - Sí; 0 - No)

La información se encuentra agrupada por código de participante y por cada participante la información de las vueltas se encuentra ordenada por número de vuelta (de menor a mayor).
Para indicar el fin de la carga de datos se ingresa un código de participante negativo.

Se pide calcular e informar






A)
Informar el ganador de la competencia. El mismo es aquella persona que haya demorado menos tiempo en completar el circuito completo (las 4 vueltas) y nunca haya sido descalificado. Informar el código de participante y el tiempo demorado.

NOTA: No habrá más de una persona que haya completado el circuito con el menor tiempo.




B)
La cantidad total de participantes que hayan sido descalificados al menos una vez.




C)
La cantidad total de participantes que no hayan sido descalificados en la última vuelta.




D)
Por cada participante, el porcentaje de vueltas descalificadas y el porcentaje de vueltas no descalificadas.



Datos y estructura del programa:

voy a necesitar 2 ciclos, 1 ciclo exacto de 4 vueltas por cada participante y un ciclo inexacto por el total de participantes que desconozco.

Datos de entrada:
Codigo de participante INT
numero de vuelta 1 a 4
tiempo empleado Float
descalificado bool





*/

#include <iostream>
using namespace std;

int main(void)
{

    int i, codigoParticipante, numeroVuelta, descalificado=1, ganador, contadorDescalificado=0, participantesNoDescalificados=0,contadorParticipantesDescalificados=0, porcentajeVueltasDescalificadas=0, porcentajeVueltasNoDescalificadas=0;
    float tiempoEmpleado=0, tiempoTotal=0, tiempoMinimo=0;
    bool hayTiempoMinimo = false;
    const int CANTIDAD_TOTAL_VUELTAS=4;



    cout <<"Ingrese codigo de participante: ";
    cin >> codigoParticipante;

    while(codigoParticipante>=0)
    {

        for(i=1; i <=CANTIDAD_TOTAL_VUELTAS; i++)
        {
            numeroVuelta=i;
            cout <<"Ingrese el tiempo empleado: ";
            cin >> tiempoEmpleado;
            cout <<"Fue descalificado? ingrese 1 para si 0 para no ";
            cin>> descalificado;
            if (descalificado==0)
            {
                tiempoTotal+= tiempoEmpleado;
            }else{
                contadorDescalificado++;
            }
            ///resolucion punto C
            if(numeroVuelta==4&& descalificado==0){
                participantesNoDescalificados++;
            }
        }
        ///resolucion punto A
         if (contadorDescalificado==0 && hayTiempoMinimo==false){
                tiempoMinimo=tiempoTotal;
                ganador=codigoParticipante;
                hayTiempoMinimo=true;
            }else if(contadorDescalificado==0 && tiempoTotal< tiempoMinimo){
                tiempoMinimo=tiempoTotal;
                ganador=codigoParticipante;
            }

        ///resolucion punto B
        if(contadorDescalificado>0){
            contadorParticipantesDescalificados++;
        }
        ///resolucion punto D
        porcentajeVueltasDescalificadas=(contadorDescalificado*100)/CANTIDAD_TOTAL_VUELTAS;
        porcentajeVueltasNoDescalificadas= 100-porcentajeVueltasDescalificadas;

        ///punto D
        cout << "El porcentaje de vueltas descalificadas es: " <<porcentajeVueltasDescalificadas<<"% y el porcentaje de vueltas no descalificadas es "<<porcentajeVueltasNoDescalificadas<<"%."<<endl;

        cout <<"Ingrese codigo de participante: ";
        cin >> codigoParticipante;
        tiempoTotal=0;
        contadorDescalificado=0;
        descalificado=1;




    }
    ///punto A
    cout <<"El ganador es el participante numero "<< ganador<< " con un tiempo total de "<<tiempoMinimo<<"."<< endl;
    ///punto B
    cout <<"La cantidad total de participantes que fueron descalificados al menos una vez es "<<contadorParticipantesDescalificados<< endl;
    ///punto C
    cout <<"La cantidad total de participantes que no fueron descalificados en la ultima vuelta es "<<participantesNoDescalificados<<endl;
    return 0;

}
