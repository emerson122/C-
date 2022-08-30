/*Dada la altura y la edad de N cantidad de personas, 
 * determine si es apto para jugar en un equipo de baloncesto; 
 * debe tener presente que la persona debe tener 18 años o más,
 * y debe medir  165 cm o más. Muestre el total de aceptados y 
 * rechazados.*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std;    //usar la libreria namespace std

int main()
{
	float altura;                          //definir altura como flotante
	int edad,acep=0,recha=0,salir=0;	   //definir variables edad aceptado rechazado y salir igual a 0			
	cout<<"Programa que determina si es apto para jugar en un equipo de baloncesto\n"; //titulo del programa
	cout<<"\n";
	while(salir!=1){                                       //comienzo dela condicion
		cout<<"Ingrese la altura del aspirante: ";       //peticion de datos al usuario
		cin>>altura;                                     //guardar los datos en la variable correspondiente       
		cout<<"Ingrese la edad del aspirante: ";         
		cin>>edad;
	
		if (edad>=18 && altura>=165){   //si la edad es mayor o igual a 18 y la altura es mayor o igual a 165 el se imprime que el Aspirante es aceptado
			cout<<"************************\n";
			cout<<"* Aspirante aceptado "<<"***"<<endl;
			cout<<"************************\n";
			acep+=1;
		}
		else{                            //Si no se cumple la condicion el Aspirante automaticamente esw rechazado
			cout<<"\n";
			cout<<"::::::::::::::::::::::::\n";
			cout<<":Aspirante Rechazado "<<":::"<<endl;
			cout<<"::::::::::::::::::::::::\n";
			recha+=1;
		}
		cout<<"\n";
		cout<<"Ingrese 2 para continuar y 1 para salir."<<endl;      //instruccion para continuar o finalizar el programa 
		cin>>salir;
		cout<<"\n";
		cout<<"---------------------------------------------------------"<<endl;
	}
	cout<<"/////////////////////////////////////////////"<<endl;
	cout<<"// Numero de aspirantes Aceptados:"<<acep<<" //////"<<endl;
	cout<<"// Numero de aspirantes Rechazados:"<<recha<<" ////////"<<endl;
	cout<<"/////////////////////////////////////////////"<<endl;
	return 0;                                                        //fin del programa
}
