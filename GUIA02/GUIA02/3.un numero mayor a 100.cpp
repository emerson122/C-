/*Solicitar números por el teclado hasta que alguno sea mayor a 100, luego debe mostrar la suma de los números ingresados.*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std; //libreria namespace

int main()
{
	int num,suma=0;  //definir variable num y suma incializarla en 0
	
		cout<<"Programa que calculo la suma de todos los numeros ingresados antes de llegar a ser mayor que 100\n";  //titulo del programa
		cout<<"\n";
		do{                                					  //condicion "do while" hasta que num sea mayor 100 el ciclo no se terminara
			cout<<"Ingrese un numero: ";                 //peticion de datos al usuario 
			cin>>num;										  //guardar los datos
			suma+=num;                                        //suma se incrementa en cada ciclo
		}while(num<100);                                      //fin de la condicion	
    	cout<<"--------------------------------------------------------"<<endl;
    	cout<<"La suma de todos los numeros ingresados es:"<<suma<<endl;      //impresion de suma 	
    	
		return 0;                                                    //fin del programa
   }
