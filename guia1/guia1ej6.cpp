//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°:6
/* Comentarios
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio $ 2000
 y como porcentajes por semana: 20%, 15%, 60% y 5%.
 */

#include <iostream>
using namespace std;

int main(void){
    int s1, s2, s3, s4, totalMes, promedio, p1, p2, p3,p4;
    cout <<"Ingrese la recaudación de la semana 1: ";
    cin >> s1;
    cout <<"Ingrese la recaudación de la semana 2: ";
    cin >> s2;
    cout <<"Ingrese la recaudación de la semana 3: ";
    cin >> s3;
    cout <<"Ingrese la recaudación de la semana 4: ";
    cin >> s4;
    totalMes= s1+s2+s3+s4;
    promedio= totalMes/4;
    p1 = (s1*100)/totalMes;
    p2 = (s2*100)/totalMes;
    p3 = (s3*100)/totalMes;
    p4 = (s4*100)/totalMes;
    cout <<"El promedio de la recaudación semanal es $" <<promedio <<endl;
    cout <<"Los porcentajes por semana son: " << p1 <<"%, " <<p2<<"%, "<< p3<<"% y "<<p4<<"%.";
	return 0;

}
