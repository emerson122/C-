/*que pida por teclado dos números, muestre la suma en pantalla y pregunte al usuario si quiere realizar otra suma. (utilizar do while)*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std;  //uso de la libreria namespace std

int main(){
	int num1,num2,suma=0,salir=0;   //declarar las variables num1 num2 y suma y salir =0
	cout << "Programa que pide en pantalla dos numeros y muestra la suma de ambos " << endl; //titulo del programa
	
	do{                                                 //inicio de la condicion
		cout<<"Ingrese un numero\n";                    //peticion al usuario de ingresar  un numero
		cin>>num1;                                      //guardar en la varible num1
		cout<<"Ingrese un numero \n";                   //segunda peticion al usuario de ingresar un numero
		cin>>num2;                                		//se almacena el segundo numero
		
		suma=num1+num2;                                 //operador se suma num1 + num2 y se almacena en la variable suma
		cout<<"La suma es: "<<suma<<endl;               //se imprime la variable suma
		cout<<"Ingrese un 2 para realizar otra suma o 1 para salir"<<endl;   //peticion al usuario si quiere seguir realizando sumas o salir del programa
		cin>>salir;                                                        //leer la varible salir 
		
		
		}while(salir!=1);                                                //fin de la condicion
	return 0;                                                            //fin del programa
}
