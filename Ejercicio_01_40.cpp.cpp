// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 40
// Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas:
// 5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. 
// Realizar el programa en el que dado el precio del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el cambio a entregar empleando el menor número posible de monedas.

#include <iostream>

using namespace std;

int main()
{
    double n;
    int m5,m1,m05,m02,m01;
    cout<<"Ingrese monto: "<<endl,cin>>n;
    while(n!=0){
        if(n>=5){
            n=n-5;
            m5++;
        } else if (n<5 && n>=1){
            n=n-1;
            m1++;
        } else if (n<1 && n>=0.50){
            n=n-0.50;
            m05++;
        } else if (n<0.50 && n>=0.20){
            n=n-0.20;
            m02++;
        } else if (n<0.20 && n>=0.10){
            n=n-0.10;
            m01++;
        }
    }
    cout<<m5<<" monedas de 5Bs."<<endl;
    cout<<m1<<" monedas de 1Bs."<<endl;
    cout<<m05<<" monedas de 50Ctvs."<<endl;
    cout<<m02<<" monedas de 20Ctvs."<<endl;
    cout<<m01<<" monedas de 10Ctvs."<<endl;
    return 0;
}
