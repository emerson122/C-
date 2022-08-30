/*Hacer un programa que muestre cuantos multiplos de 7, 
*y cuantos multiplos de 9 hay en los numeros comprendidos 
*entre 1000 y 5000.*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>
using namespace std;   //uso de libreria namespace std

int main(){


    int mul;         //declarar variable de multiplo
    cout<<"Programa que imprime los numeros multiplos de 7 y 9 mayores que 1000 y menores a 5000 "<<endl;    //titulo del programa
    cout<<"---------------------Multiplos de 7---------------------------------------------"<<endl;          // inicio de Multiplo del 7 
	do {                                                 //inicio de condicion
		for(mul=7;mul<=5000;mul=mul+7){                  //se define mul=7 tiene que ser menor o igual a 5000 y mul se le suma 7
 			if(mul>1000 && mul<5000)                     //si mul es mayor a 1000 y menor que 5000 imprime una tabulacion y la variable mul
					cout<<"\t"<<mul;                     //imprime desde 1001 a 4998 por que cumple con la condicion
		}
    
	}while(mul<=5000);	  //fin de la condicion
    cout<<"\n";
    cout<<"------Multiplos de 9------------------------------------------------------------"<<endl;  //inicio  de multiplos 9
    do {
		for(mul=9;mul<=5000;mul=mul+9){                              //se define mul=9 tiene que ser menor o igual a 5000 y mul se le suma 9
			if(mul>1000 && mul<5000)                                 //si mul es mayor a 1000 y menor que 5000 imprime una tabulacion y la variable mul
					cout<<"\t"<<mul;                                 //imprime desde el 1008 al 4995 por que son los que cumple con la condicion
		}
    
    }
    while(mul<=5000);                                                //Fin del ciclo
    
    
   
    return 0;                                                      //fin del programa

}
