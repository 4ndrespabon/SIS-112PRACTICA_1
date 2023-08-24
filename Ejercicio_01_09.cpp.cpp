// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 9
// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. 
//Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.
#include <iostream>

using namespace std;

int main()
{
    int mes=0;
    cout<<"Ingrese un numero entre uno a 12 "<<endl;
    cin>>mes;
    if (mes==1){
        cout<<"ENERO"<<endl;
    }
    if (mes==2){
        cout<<"FEBRERO"<<endl;
    }
    if (mes==3){
        cout<<"MARZO"<<endl;
    }
    if (mes==4){
        cout<<"ABRIL"<<endl;
    }
    if (mes==5){
        cout<<"MAYO"<<endl;
    }
    if (mes==6){
        cout<<"JUNIO"<<endl;
    }
    if (mes==7){
        cout<<"JULIO"<<endl;
    }
    if (mes==8){
        cout<<"AGOSTO"<<endl;
    }
    if (mes==9){
        cout<<"SEPTIEMBRE"<<endl;
    }
    if (mes==10){
        cout<<"OCTUBRE"<<endl;
    }
    if (mes==11){
        cout<<"NOVIEMBRE"<<endl;
    }
    if (mes==12){
        cout<<"DICIEMBRE"<<endl;
    }
    if (mes>12 || mes<1){
        cout<<"Mes Invalido"<<endl;
    }
    return 0;
}
