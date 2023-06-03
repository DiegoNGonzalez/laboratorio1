//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°:13
/* Comentarios
Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad
de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrará por pantalla que se deberán entregar 2 billetes de $ 1.000,
 1 billete de $ 500 y 0 billetes de $ 200 y $ 100.
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrará por pantalla que se deberán entregar 3 billetes de $ 1.000,
 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrará por pantalla que se deberán entregar 1 billete de $ 200,
1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $ 100
 ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.


*/

#include <iostream>
using namespace std;

int main(void){
    int importe, bille1000, bille500,bille200,bille100, resto1000, resto500, resto200;
    cout<< "Ingrese el importe a retirar: ";
    cin >> importe;
    bille1000= importe/1000;
    resto1000= importe%1000;
    bille500= resto1000/500;
    resto500= resto1000%500;
    bille200=resto500/200;
    resto200= resto500%200;
    bille100= resto200/100;
    cout << "Se entregan "<< bille1000<<" billetes de $1000, "<<bille500<<" billetes de $500, "<<bille200<<" billetes de $200 y "<<bille100<<" billetes de $100.";
	return 0;

}
