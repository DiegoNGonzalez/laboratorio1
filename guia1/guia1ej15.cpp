//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:1
//EJ N�:15
/* Comentarios
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona y tiempo determinado. Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.

NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.

 */

#include <iostream>
using namespace std;

int main(void){
    float tempMax, tempMin, amplitud;
    cout <<"Ingrese la temperatura maxima registrada ayer en San Fernando: ";
    cin >>tempMax;
    cout<<"Ingrese la temperatura minima registrada ayer en San Fernando: ";
    cin>>tempMin;
    amplitud= tempMax-tempMin;
    cout<<"La amplitud termica del dia de ayer fue: "<<amplitud<<"�C";
	return 0;

}
