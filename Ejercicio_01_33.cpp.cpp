// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 33
// Problema planteado: Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos los meses de 30 días.

#include <iostream>

using namespace std;

int main()
{
    int a1,m1,d1,a2,m2,d2,dd,dm,da,total;
    cout<<"Ingrese dia, mes y año"<<endl,cin>>d1,cin>>m1,cin>>a1; 
    cout<<"Ingrese dia, mes y año"<<endl,cin>>d2,cin>>m2,cin>>a2;
    if (a1<a2){ //Restar el año menor al mayor
        da=(a2-a1)*360;
    } else if (a2<a1) {
        da=(a1-a2)*360;
    }
    if (m1<m2){ //Restar el mes menor al mayor
        dm=(m2-m1)*30;
    } else if (m2<m1){
        dm=(m1-m2)*30;
    }
    if (d1<d2){ //Restar el dia menor al mayor
        dd=d2-d1;
    } else if (d2<d1){
        dd=d1-d2;
    }
    //Salida y suma de diferencia
    cout<<"La diferencia de dias es de: "<<dd+dm+da<<" dias"<<endl;
    return 0;
}
