/*Hacer un programa que lea n numeros y determine cual es mayor, el menor y la media de todos los numeros leidos.*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std;   //uso de libreria namespace std

int main(){ 
	int inicio,num,temp,mayor=0,men=0,suma=0;                                        //se declaran las variables inicio,temp y las variables mayor menor ysuma  iguales a 0
	float media=0;                                                                   //se declara la media como flotante ya que el resultado podrian ser decimales
	cout << "Programa que lee un numero y determina cual es el mayor menor y la media de ambos" << endl; //titulo del programa
	cout <<"\n";
	cout <<"Cual es la cantidad de numeros a determinar?"<<endl;                                  //peticion de datos al usuario
	cin>>inicio;                                                                                   //guardar los datos en la variable
	
	for(temp=1;temp<=inicio;temp++){                                                            //se define temporal igual 1 y tiene que ser menor o igual a la variable inicio
		
			cout<<"Ingresa un numero: ";                                                        //peticion de datos
			cin>>num;																			//guardar los datos en la variable
			if(temp==1){                                                                         //condicion si la variable temporal es igual 1 entonces mayor = meno = num
				mayor = men = num;
			}
				if(num>mayor){																    //si num es mayor a la variable mayor  entonces  mayor es igual a num
					mayor=num;
				} 
					if(num<men){                                                                //si num es menor a la variable menor entonces men = num
						men=num;
						
					}
					suma+=num;                                                                    // suma + num para incrementar          
	}
	
	media=suma/inicio;                            //se saca la media dividiendo la suma total por la cantidad de numeros
	cout<<"\n";
	//impresion de variables
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"El numero menor es: "<<men<<endl;
	cout<<"La media es: "<<media<<endl;
		
	
	
	
	return 0;                          //fin del programa
}
