//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:2
//EJ N°:15
/* Comentarios
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.


*/

#include <iostream>
using namespace std;

int main(void)
{
    float nota1,nota2,nota3,nota4;
    int contador = 0;

    cout <<"Ingrese las 4 notas: ";
    cin >> nota1>>nota2>>nota3>>nota4;

    if(nota1 >= 4){
        contador ++;
    };
    if(nota2 >= 4){
        contador ++;
    };
    if(nota3 >= 4){
        contador ++;
    };
    if(nota4 >= 4){
        contador ++;
    };

    if (nota1>=7 && nota2>=7 && nota3>=7 && nota4>=7){
        cout <<"Promociona.";
    }else if (contador >= 3){
        cout <<"Rinde examen final.";
    }else if (contador >=1){
        cout <<"Recupera parciales.";
    }else{
        cout <<"Recursa la materia.";
    }

        return 0;

}
