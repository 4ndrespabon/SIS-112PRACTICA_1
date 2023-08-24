// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 41
// Problema planteado: Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en función a las horas trabajadas y una tarifa hora. 
// Se sabe que cuando las horas que trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al doble de una hora normal,
// considere además un descuento del 5% a todos los obreros para pagar su prima de seguro. 
// Por lo tanto determine: 
// el pago total y el pago neto por cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la prima de manera general.
#include <iostream>

using namespace std;

int main()
{
    int numobreros,numhoras;
    float tarifahora,primatotal,horasextra,pagototal;
    cout<<"Numero de obreros: "<<endl,cin>>numobreros;
    cout<<"Tarifa hora: "<<endl,cin>>tarifahora;
    for (int i=1;i<=numobreros;i++){
        cout<<"Ingrese numero de horas trabajadas: ",cin>>numhoras;
        if (numhoras>40){
            horasextra=numhoras - 40;
            numhoras=numhoras-horasextra;
        }
        pagototal=pagototal+(numhoras*tarifahora)+(horasextra*tarifahora*2);
        primatotal=primatotal+((numhoras*tarifahora)+(horasextra*tarifahora*2))*0.05;
    }
    cout<<"Pago total: "<<pagototal<<endl;
    cout<<"Prima total: "<<primatotal<<endl;
    return 0;
}
