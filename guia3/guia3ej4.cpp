//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios */

#include <iostream>
using namespace std;

int main(void){
    int i=0, n1,n2,mayor,menor;

    cout<< "Ingrese 2 numeros: ";
    cin >>n1>>n2;

    if (n1>n2){
        mayor= n1;
        menor = n2;
    }else{
        menor=n1;
        mayor=n2;
    };

    i = menor;

    for(i; i<= mayor; i++){
        cout << i<< endl;
    }
	return 0;

}
