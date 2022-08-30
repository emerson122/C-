/*programa que encuentra el mayor de 5 numeros usando while*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std;                        //uso de la libreria namespace

int main(){
	int num1,num2,num3,num4,num5,may,fin=1;      			 /*declara variables numero 1,numero 2,numero3,numero 4,numero 5 y mayor*/
	 cout<<"ingresa el primer numero:  ";  					/*Peticion de Datos al usuario*/
 	 cin>>num1;                             				/*guarda la peticion en la variable */
 	 cout<<"ingrese el segundo numero: ";					
     cin>>num2;
     cout<<"ingrese el tercer numero:  ";
     cin>>num3;
     cout<<"ingrese el cuarto numero:  ";
     cin>>num4;
     cout<<"ingrese el quinto numero:  ";
     cin>>num5;
     //proceso
    while(fin<=2){											/*mientras fin no sea menor o igual a 2 repetir */
		if(num1>num2 && num1>num3 && num1>num4 && num1>num5){   /*se ejecuta hasta que num1 sea mayor que num2 y num1 mayor que num3 y num1 mayor que num4 y num1 mayor que num5*/
				may=num1;
				fin++;
			}
				else if(num2>num1 && num2>num3 && num2>num4 && num2>num5){   /*se ejecuta hasta que num2  sea mayor que num1 y num2 mayor que num3 y num2 mayor que num4 y num2 mayor que num5*/
					may=num2;
					fin++;   		
				}
					else if(num3>num1 && num3>num2 && num3>num4 && num3>num5){  /*se ejecuta hasta que num3  sea mayor que num1 y num3 mayor que num2 y num3 mayor que num4 y num3 mayor que num5*/
						may=num3;
						fin++;			
					}
						else if(num4>num1 && num4>num2 && num4>num3 && num4>num5){  /*se ejecuta hasta que num4  sea mayor que num1 y num4 mayor que num2 y num4 mayor que num3 y num4 mayor que num5*/
								may=num4;
								fin++; 
						}
			
			else{																	/*sino entonce el num5 es el mayor */
				may=num5;
				fin++; 
				}
		}
					cout<<"\n";
					cout<<"El mayor es: "<<may<<endl;                             /*impresion de mayor*/
					return 0;                                                      /*fin del program*/
}
		
    
