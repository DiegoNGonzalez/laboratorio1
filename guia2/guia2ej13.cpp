//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N�:
//EJ N�:
/* Comentarios
Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando d�a, mes y a�o como 3 datos individuales. Luego ingresar la fecha actual ingresando d�a, mes y a�o como 3 datos individuales. Calcular luego la edad en a�os de esa persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 reci�n los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19. Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 d�as para cumplir los 19 a�os.

*/

#include <iostream>
using namespace std;

int main(void){
    int diaNacimiento,mesNacimiento, anioNacimiento, diaActual,mesActual, anioActual, edad;

    cout <<"Ingrese dia, mes y a�o de nacimiento: ";
    cin >> diaNacimiento>>mesNacimiento>>anioNacimiento;
    cout<<"Ingrese dia, mes y a�o actual: ";
    cin >>diaActual>>mesActual>>anioActual;

    edad = anioActual - anioNacimiento;
    if(mesNacimiento >= mesActual){
        if(diaNacimiento > diaActual){
            edad --;
        };
    };

    cout<< edad;
	return 0;

}
