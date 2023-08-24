// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 38
// Problema planteado: En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9 millones.
// Las tasas de crecimiento de la población son de 2% y 3% respectivamente. 
// Desarrollar un programa para saber en qué año la población del país B supera a la de A.
#include <iostream>

using namespace std;

int main()
{
    //Entrada variables fijas
    int año=2009;
    float a=25,b=19.9;
    //Proceso de crecimiento poblacional
    while(a>=b){
        cout<<"Año: "<<año<<endl;
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
        cout<<"----------"<<endl;
        a=a+(a*0.02);
        b=b+(b*0.03);
        año+=1;
    }
    //Salida
    cout<<"En el año: "<<año<<endl;
    cout<<"A="<<a<<" tiene menor poblacion que "<<"B="<<b<<endl;
    return 0;
}
