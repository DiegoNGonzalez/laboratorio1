//Nombre:
//TP N°:
//EJ N°:
//Comentarios

#include <iostream>
using namespace std;

int main(void){
    float n1, n2, resultado;
    cout <<"Ingresar un numero: ";
    cin >>n1;
    cout <<"Ingresar otro numero: ";
    cin >> n2;
    resultado = n1* n2;
    cout << "El producto es: " <<resultado <<endl;

    ///División entera
    int libros;
    int hermanos;
    int resultad2;
    int resto;
    cout <<"Ingrese la cantidad de objetos a dividir: ";
    cin >> libros;
    cout <<"Ingrese la cantidad de gente a dividir objetos: ";
    cin >> hermanos;

    resultad2 = libros /hermanos ;
    resto = libros % hermanos;
    cout <<"Le corresponden a cada uno: "<< resultad2 <<endl;
    cout <<"Restan " << resto << " objetos a repartir";

	return 0;

}
