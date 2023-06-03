//Nombre: Diego Nicolas Gonzalez Valenzuela
//Tecnicatura universitaria en Programación
//Laboratorio de computación 1
//Primer Parcial

/* Comentarios
La Secretaría de Agricultura de la Provincia de Buenos Aires dispone de los registros de cosecha de 10 de sus hortalizas producidas en sus numerosas localidades. Por cada hortaliza y localidad se registró:

- Código de hortaliza (entero entre 10 y 50)
- Código de localidad (entero entre 4000 y 9000)
- Cantidad total de toneladas previstas a cosechar (float)
- Cantidad total de toneladas cosechadas (float)
- Inversión total expresada en millones (float)

Todas las hortalizas registran información. La información se encuentra agrupada por Código de hortaliza. Para indicar el fin de la carga de registros de una hortaliza se ingresa un código de localidad igual a 0.


Se pide calcular e informar

A)
Por cada hortaliza, la cantidad de localidades en las que se obtuvo una cosecha menor a la prevista.
30
B)
El porcentaje de toneladas cosechadas con respecto al total de las toneladas previstas por cosechar entre todas las hortalizas.
20
C)
La cantidad de hortalizas por las que se realizó una inversión totalizada de más de 100 millones.
30
D)
La localidad que haya logrado la menor cantidad total de toneladas cosechadas de la hortaliza con código 20.
20

Aclaraciones

Solamente habrá una localidad que haya cosechado la menor cantidad de toneladas de la hortaliza con código 20.


*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(void){
	setlocale(LC_ALL, "spanish");

	int codigoHortaliza, codigoLocalidad, i;
	float toneladasPrevistas, toneladasCosechadas, inversionTotal;

	///punto B
	float acumuladorPrevistas=0, acumuladorCosechadas=0, porcentaje=0;

    ///punto c
    int contadorHortalizasMas100=0;

    ///punto D
    int localidadMenorCosecha=0;
    float menorCosecha=-1;

	for(i=0;i<3;i++){
        cout <<"Ingrese codigo de Hortaliza(entre 10 y 50): "<<endl;
        cin>>codigoHortaliza;
        cout<<"Ingrese el codigo de la localidad(entre 4000 y 9000)"<<endl;
        cin >> codigoLocalidad;
         ///punto A
        int contadorLocalidad=0;

        ///punto C
        float acumuladorInversion =0;

        while(codigoLocalidad!=0){
            cout<<"Ingrese la cantidad total de toneladas previstas a cosechar: "<<endl;
            cin>>toneladasPrevistas;
            cout<<"Ingrese la cantidad total de toneladas cosechadas: "<<endl;
            cin>>toneladasCosechadas;
            cout<<"Ingrese la inversion total expresada en millones: "<<endl;
            cin>>inversionTotal;

            ///punto A
            if(toneladasCosechadas<toneladasPrevistas){
                contadorLocalidad++;
            }
            ///punto B
            acumuladorPrevistas+=toneladasPrevistas;
            acumuladorCosechadas+=toneladasCosechadas;

            ///punto C
            acumuladorInversion +=inversionTotal;

            if (codigoHortaliza == 20 && (menorCosecha == -1 || toneladasCosechadas < menorCosecha)) {
                localidadMenorCosecha = codigoLocalidad;
                menorCosecha = toneladasCosechadas;
            }

            cout<<"Ingrese el codigo de la localidad(entre 4000 y 9000)"<<endl;
            cin >> codigoLocalidad;
        }
        cout <<"La cantidad de localidades en las que se obtuvo una cosecha menor a la prevista es: "<<contadorLocalidad<<" ."<<endl;

        ///punto C
        if(acumuladorInversion >100){
            contadorHortalizasMas100 ++;
        }

	}
    ///punto B
    porcentaje=(acumuladorCosechadas*100)/acumuladorPrevistas;

    cout <<"El porcentaje de toneladas cosechadas con respecto al total de toneladas previstas es: "<<porcentaje<<"% ."<<endl;

    ///punto C
    cout <<"La cantidad de hortalizas por las que se realizó una inversión total de más de 100 millones es: "<<contadorHortalizasMas100<<"."<<endl;

    ///punto D
        cout << "La localidad que logró la menor cantidad total de toneladas cosechadas de la hortaliza con código 20 es: " << localidadMenorCosecha << endl;


	return 0;

}
