// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/08/2023
// Fecha modificación: 21/08/2023
// Número de ejericio: 10
// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. 
//Si no es ninguna letra que diga que es carácter especial.
#include <iostream>

using namespace std;

int main()
{
    char letra;
    cout<<"Ingrese la letra "<<endl;
    cin>>letra;
    if (letra>='a' && letra<='z'){
        if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
            cout<<letra<<" es vocal"<<endl;
        }
        else{
            cout<<letra<<" es consonante"<<endl;    
        }
    }
    else{
        cout<<"Es un caracter especial." << endl;
    }
    return 0;
}


