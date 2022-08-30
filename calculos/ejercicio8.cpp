//programa en c++  que al recibir como entrada 3 valores enteros diferentes entre sí, determine si los mismos están ordenados en orden ascendente.
#include <iostream>              //libreria incluida de iostream

using namespace std;             //uso de la la libreria de namespace

int main()
{
	int num1,num2,num3;          //se declaran 3 variables mum1, num2, num3
	cout << "Programa que al ingresar 3 numero determinara si estan ordenados" << endl;  //titulo
	cout<<"Ingrese el primer numero\n";                             //peticion del primer numero
	cin>>num1;                                                      //Guardar el primer numero en la variable num1
	cout<<"Ingrese el segundo numero\n";                            //Peticion del segundo numero
	cin>>num2;                                                      //Guardar el segundo numero en la variable num2 
	cout<<"Ingrese el tercer numero\n";                             //Peticion dl tercer numero
	cin>>num3;                                                      //Guardar el tercer numero en la variable num3
	
	if((num1<num2)&&(num2<num3)){                                   //si el num1 es menor al num2 y el num2 es menor a num3 se impreme
	    cout<<"\n";
		cout <<"Los numeros fueron ingresados en orden ascendente"<<endl; 
	}
	else{
	    cout<<"\n";   
		cout<<"los numeros NO fueron ingresados de manere ascendente"<<endl; //instrucion else que se imprime si los numeros no fueron ingresados de manera ascendente
	}
	return 0;                                                       //fin del algortimo
}
