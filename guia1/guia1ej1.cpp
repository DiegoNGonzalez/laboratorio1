//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°: 1
//EJ N°: 1
//Comentarios Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
//y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

#include <iostream>
using namespace std;

int main(void){
    int horas, precioHora, sueldo;
    cout<<"Ingrese la cantidad de horas trabajadas: ";
    cin >> horas;
    cout <<"Ingrese el precio por hora trabajada: ";
    cin >> precioHora;

    sueldo = horas * precioHora;
    cout << "El sueldo correspondiente es: $" << sueldo <<endl;
	return 0;

}
