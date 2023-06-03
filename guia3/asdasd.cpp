//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios */

#include <iostream>
using namespace std;

int main(void){
int nro_partido, minutos_jugados, tarjeta_amarillas, tarjeta_rojas, goles;
    int x=0;
    int acu=0,acu2=0,mayor_gol=0;
    float acu_tarjetas_amarillas=0,acu_tarjetas_rojas=0;
    int mayor_goles=0,m_partido=0;
    int   racha=0 ,m_cant=0;
    float promedio_tarjetas_amarillas, promedio_tarjetas_rojas;

    for(x=0;x<19;x++){

        cout << "Ingrese el nro de partido :" ;
        cin >> nro_partido;
        cout << "Ingrese los minutos jugados: ";
        cin >> minutos_jugados;
        cout << "Ingrese las Tarjetas amarillas:" ;
        cin >> tarjeta_amarillas;
        cout  <<"Ingrese las tarjetas rojas :" ;
        cin >> tarjeta_rojas;
        cout <<"Ingrese los goles :";
        cin >> goles;

        ///A)La cantidad de partidos que no jugó (partidos con minutos igual a cero)

        if (minutos_jugados==0){
            acu++;

        }

        ///B)La cantidad de partidos que jugó por completo (minutos >= 90)

        if (minutos_jugados>=90){
            acu2++;
        }

        ///C)El promedio de tarjetas recibidas por partido.

        if (tarjeta_amarillas>0){
            acu_tarjetas_amarillas+=tarjeta_amarillas;
        }

        if (tarjeta_rojas>0){
            acu_tarjetas_rojas++tarjeta_rojas;
        }

        ///D)El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
        if (goles > mayor_gol){
            mayor_gol=goles;
            m_partido=nro_partido;
        }
      ///  E)La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.
        if (nro_partido>0 && goles >0){
            racha++;
            m_cant=racha;
            if (racha > m_cant){
                m_cant=racha ;
            }

        }

    }

    promedio_tarjetas_amarillas= (acu_tarjetas_amarillas/19);
    promedio_tarjetas_rojas= (acu_tarjetas_rojas/19);

    cout << endl << endl;

        if(acu==0){
            cout << "la cantidad de partido que no jugo es :" << acu << endl;
        }
        else
        {
            cout << "Jugo todos los partidos " << endl;

        }

        cout << "La cantidad de partido que mas de 90 minutos es :" << acu2 << endl;

        cout <<"El promedio de tarjetas amarillas es:" << promedio_tarjetas_amarillas << endl;

        cout <<"El promedio de tarjetas rojas es: " << promedio_tarjetas_rojas << endl;

        cout <<"El partido con mayor gol es : " << m_partido << " goles " << mayor_gol << endl;

        cout << "La mayor racha que covirtio goles es:" << m_cant << endl;

	return 0;

}
