/* Realice un programa utilizando el ciclo for, que permita calcular el promedio de calificaciones de 15 estudiantes matriculados en una sección. */
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std;
int main() //inicio del programa programa 
{
    float num, suma=0, promedio;  //declaracion de variables como flotantes
    cout<<"Programa que nos da el promedio de los estudiantes de una seccion\n";  //titulo del programa
    cout<<"\n";
    cout<<"***************************************************"<<endl;
	cout<<"introduce las 15 calicaciones de los estudiantes \n";                  
	cout<<"***************************************************"<<endl;
	
		for (int a=0;a<=14;a++){                                                //condicion for el programa entrara en un ciclo y no saldra hasta que se cumpla la condicion de que a sea menor a 15
			cout<<"ingresa la calificacion de alumno numero "<<a+1<<": ";
			cin>>num;                                                           //se leer el numero ingresado
			suma+=num;                                                          // la suma se incrementa en cada ciclo
		}
	
		//operaciones aritmeticas
		promedio=suma/15; 
		//impresion de variables
		cout<<"\n";
		cout<<"*********************************"<<endl;
		cout<<"El promedio es:"<<promedio<<endl;
		cout<<"*********************************"<<endl;
	
	return 0;  //fin del programa
}
