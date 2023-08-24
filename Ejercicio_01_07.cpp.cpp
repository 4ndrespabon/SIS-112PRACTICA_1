// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 7
// Problema planteado: Número amigo
#include <iostream>

using namespace std;

int main()
{
    //Asignacion variables
    int num1,num2,suma1,suma2;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>num2;
    //Proceso divisiones y sumas
    for (int i=1;i<num1;i++){
        if (num1%i==0){
            suma1=suma1+i;
        }
    }
    for (int j=1;j<num2;j++){
        if (num2%j==0){
            suma2=suma2+j;
        }
    }
    //Proceso de verificar numeros amigos y salida
    if(num1==suma2 && num2==suma1){
        cout<<num1<<" y "<<num2<<" son numeros amigos"<<endl;
    }
    else{
        cout<<num1<<" y "<<num2<<" no son numeros amigos"<<endl;
    }
    return 0;
}
