// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 25
// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al azar,
//el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a aproximaciones,
//para lo cual se dispone de 5 intentos. Veamos un ejemplo:
//Supongamos que el número “pensado” por la computadora sea el 42.
//Salida del programa:
//Estoy pensando un número entre 0 y 50
//Intento 1
//? 25
//El numero esta entre 25 y 50
//Intento 2
//? 34
//El numero esta entre 34 y 50
//Intento 3
//? 45
//El numero esta entre 34 y 45
//Intento 4
//? 40
//El numero esta entre 40 y 45
//Intento 5
//? 42
//Felicitaciones… Adivinaste el número

#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    // Inicializar num random 
    srand(time(0));

    int numeroAleatorio = rand() % 51; 
    int intentos = 0;
    int intentoUsuario;
    //Proceso
    cout<<"Estoy pensando en un número entre 0 y 50."<<endl;

    while (intentos<5) {
        intentos++;
        cout<<"Intento "<<intentos<<": ";
        cin>>intentoUsuario;

        if (intentoUsuario==numeroAleatorio){
            cout<<"Felicitaciones... Adivinaste el número."<<endl;
            break;
        } else if (intentoUsuario<numeroAleatorio) {
            cout<<"El número está entre "<<intentoUsuario<<" y 50."<<endl;
        } else {
            cout<<"El número está entre 0 y "<<intentoUsuario<<"."<<endl;
        }
    }

    if (intentos == 5) {
        cout << "¡Lo siento, has agotado tus 5 intentos! El número era " << numeroAleatorio << "." << endl;
    }

    return 0;
}
