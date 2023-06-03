//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios */

#include <iostream>

using namespace std;

int main ()
{

    int legajo_estudiante, cod_materia,contador_estudiantes=0,menor_legajo=0;
    float nota=0;
    float acu=0,promedio=0;
    float menor_nota;
    int contador_mat_10=0;
    int aprobado=0,no_aprobado=0;
    float porcentaje=0,porcantaje_no_aprobado=0;
    bool menor= false;


    cout <<"Ingrese el legajo: " ;
    cin >> legajo_estudiante;
    while (legajo_estudiante<30000)
    {


        cout <<"Ingrese el cod de materia: " ;
        cin >> cod_materia;
        cout <<"Ingrese la nota: " ;
        cin >>nota;
        acu+=nota;
        contador_estudiantes++;
        if (menor == false)
        {
            menor_nota= nota;
            menor=true;
        }

        ///B)El legajo del estudiante con menor nota.
        if (nota < menor_nota)
        {
            menor_nota=nota;
            menor_legajo=legajo_estudiante;
        }

        ///C)La cantidad de exámenes rendidos para la materia 10.
        if (cod_materia==10)
        {
            contador_mat_10++;
        }

        ///D)El porcentaje de aprobados y no aprobados.
        if (nota >=6)
        {
            aprobado++;
        }
        else
        {
            no_aprobado++;
        }
        cout <<"Ingrese el legajo: " ;
        cin >> legajo_estudiante;
    }

    promedio=acu/contador_estudiantes;
    porcentaje=aprobado/contador_estudiantes*100;
    porcantaje_no_aprobado=no_aprobado/contador_estudiantes*100;

    cout << "La nota promedio es :" << promedio << endl;
    cout << "El legajo con menor nota es :" << menor_legajo << endl;
    cout <<"la cantidad de examenes rendidos para la materia 10 es :" << contador_mat_10 << endl;

    return 0;
}
