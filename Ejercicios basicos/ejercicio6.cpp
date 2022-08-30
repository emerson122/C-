/* Una empresa de telecomunicaciones ofrece el servicio de telefonía móvil en el mercado hondureño. 
 * El precio de la llamada telefónica depende del operador telefónico del número destino (expresado en dólares),
 * de acuerdo a lo siguiente:
 */
 //programa en C que, en base a la tabla de operadores, el usuario ingrese la clave del operador de telefonía y la cantidad de minutos que 
 //duró la llamada, y el programa calcule el costo de dicha llamada.
#include<iostream> //la liibreria que use en el programa

using namespace std; //se utiliza para los miembros del espacios que forman parte de su libreria

int main(){
	int opera,cant; //declaracion de variables operacion y cantidad;
	float solu; //declaracion de variable solucion
	
	cout<<"        Programa que calcula el costo de una llamada.                  "<<endl; //titulo
	cout<<"*********************************************************************\n";
	cout<<"**************************Tabla de Operaciones***********************\n";
	cout<<"*********************************************************************\n";
	cout<<"\n";
	cout<<"1. Llamadas en la misma red 0.07$ \t";
	cout<<"2. llamadas a otras operadoras movil 0.10$ "<<endl;
	cout<<"3. Telefonia fija Hondutel 0.12$ \t";
	cout<<"4. otros operadores de telefonia fija 0.14$\n";
	cout<<"\n";
	cout<<"*********************************************************************\n";
	cout<<"*********************************************************************\n"; //impresion de tabla de operaciones
	cout<<"\n";
	cout<<"Ingrese la operacion realizada con un numero del 1 al 4"<<endl;  //impresion de pantalla solicitando los datos al usuario
	cin>>opera;                                                             //se guarda la informacion en la variable respectiva
	cout<<"ingrese la cantidad de minuto que duro la llamada: ";              //se solicita nuevamente la informacion requerida
	cin>>cant;                                                              //se guarda en su varible
	                   
	if (opera == 1){   //se comprueba si el operador es igual a 1 este es para las llamadas en la misma red
		solu = (cant*0.07);                                                  //solucion = cantidad * 0.7dolares
	}
		else if(opera ==2){ //se comprueba si el operador es igual a 2 este es para las llamadas a otros operadores movil
		solu = (cant*0.10);                                                 //solucion es igual a cantidad * 0.10 dolares
		}
			else if (opera ==3){  //se comprueba si el operador es igual a 3 este es para las llamadas a Telefonia fija Hondutel
			solu = (cant*0.12);                                             //solucion es igual a cantidad * 0.12 dolares 
			}
			else if (opera == 4){ //se comprueba si el operador es igual a 4 este es para las llamadas a otros operadores de telefonia fija
				solu = (cant*0.14);                                          //solucion es igual a cantidad * 0.14 dolares 
			}
	else{
		cout<<"\n";
		cout<<"El numero de operacion es incorrecto"<<endl;
	}
			cout<<"el precio de la duracion de la llamada es: "<<solu<<endl;
		return 0;
	}
