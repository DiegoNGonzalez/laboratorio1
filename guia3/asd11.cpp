//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios */

#include <iostream>
using namespace std;

int main(void){
    int n;
    bool flag=false;
    do{
        cout<<"Ingrese un numero: ";
        cin >>n;
        if(n>0 &&n<10){
            flag= true;
        }
    }while(flag==false);
	return 0;

}
