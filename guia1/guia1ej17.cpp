//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:1
//EJ N°:17
/* Comentarios
El Laboratorio Gonzalez&Velez hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45mg de Briancetamol, 2grs de Pintoxicilina y 7mg de Ácido Simonítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Briancetamol, Pintoxicilina y de Ácido Simonítico que son necesarios para elaborarlos.

*/

#include <iostream>
using namespace std;

int main(void){
    int frascos, pildoraXfrasco=75, briancetamolXpildora=45, pintoxilicinaXpildora=2, acidoXpildora=7, briancetamolXfrasco,
    pintoxilicinaFrasco, acidoXfrasco, cantidadBriancetamol, cantidadPintoxilicina, cantidadAcido;
    briancetamolXfrasco = pildoraXfrasco* briancetamolXpildora;
    pintoxilicinaFrasco = pildoraXfrasco * pintoxilicinaXpildora;
    acidoXfrasco = pildoraXfrasco*acidoXpildora;
    cout<<"Ingrese la cantidad de frascos pedidos: ";
    cin>> frascos;
    cantidadBriancetamol= briancetamolXfrasco* frascos;
    cantidadPintoxilicina= pintoxilicinaFrasco* frascos;
    cantidadAcido=acidoXfrasco*frascos;
    cout <<"Cantidad de Briancetamol necesaria para elaborar los frascos: "<<cantidadBriancetamol<<" mg." <<endl;
    cout <<"Cantidad de Pintoxilicina necesaria para elaborar los frascos: "<<cantidadPintoxilicina<<" mg." <<endl;
    cout <<"Cantidad de Acido Simonitico necesaria para elaborar los frascos: "<<cantidadAcido<<" mg." <<endl;


	return 0;

}
