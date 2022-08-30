/*Hacer un programa que escriba los numeros pares mayores que 100 y menores 200.*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std;  //uso de libreria namespace std

int main(){
	int par;       //declarar variable de par
	cout<<"Programa que escribe los numeros pares mayores a 100 y menores a 200"<<endl; //titulo del programa
	
	do{                                                            //inicio de condicion
		for(par=2;par<=200;par+=2){                                //se inicializa par con valor de 2 tiene que ser menor o igual a 200 par incrementa en 2
			if(par>100)                                            //condicion para que par se comience a imprimir al ser mayor a 100
				cout<<"\t"<<par;
		
		
		}
	}while(par<=200);                                               //fin de la condicion
	
	
	return 0;
	}
