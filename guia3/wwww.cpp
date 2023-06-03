//Nombre: Diego Nicolas Gonzalez Valenzuela
//TP N°:
//EJ N°:
/* Comentarios */

#include <iostream>
using namespace std;

int main(void)
{
    int n, cont=0;
    bool termino=false;
    char letra1='a', letra2='b',letra3='c';

    while(termino==false)
    {
        cin>>n;
        cont++;

        switch(n)
        {
        case 1:
            if(letra3=='c'&& cont==1)
            {
                letra3='N';
            }
            break;
        case 2:
            if(letra1=='a' && cont==3)
            {
                letra1='F';
            }
            break;
        case 3:
            if(letra2=='b' && cont==2)
            {
                letra2='I';
            }
            break;
        }

        if (letra1 =='F' && letra2=='I' && letra3=='N')
        {
            termino=true;
        }
    }

    cout <<letra1<<letra2<<letra3<<endl;
    return 0;

}
