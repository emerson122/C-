//Programa en C++, que determine el mayor de tres números.
#include <iostream> //incluir la libreria iostream

using namespace std;  //incluir la libreria namespace 

int main()
{
	int num1,num2,num3; //declarar 3 variables num1,num2,num3
	cout<<"Programa que calcula el mayor de 3 numeros\n";           // titulo
	cout << "ingrese el primer numero: \n";                         //Peticion para ingresar el primer numero
	cin>>num1;                                                      //Guardar el primer dato en la variable num1
	cout << "ingrese el segundo numero: \n";                        //Peticion para ingresar el segundo numero
	cin>>num2;                                                      //Guardar el segundo dato en la variable num2
	cout << "ingrese el tercer numero: \n";                         //Peticion para ingresar el segundo numero
	cin>>num3;                                                      //Guardar el segundo dato en la variable num2
	if(num1>num2 && num1>num3){                                     //si el numero 1 es mayor al numero 2 y el numero 1 es mayor que el numero 3
		cout<<"El mayor de los 3 numeros es: "<<num1<<endl;         //impresion
	}
		if(num2>num3 && num2>num1){                                 //si el numero 2 es mayor al numero 3 y el numero 2 es mayor que el numero 1 
			cout<<"El mayor de los 3 numeros es: "<<num2<<endl;     //impresion
		}
			if(num3>num2 && num3>num1){                             //si el numero 3 es mayor al numero 2 y el numero 3 es mayor que el numero 1
				cout<<"El mayor de los 3 numeros es: "<<num3<<endl; //impresion
			}   
	return 0;                                                       //fin del Programa
}
