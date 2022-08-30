/*9. Hacer un programa que escriba en pantalla los números de 1 a 1000 en series de 25, es decir que cada 25 números hará un salto de línea.*/
//Monica Pamela Gonzales Hernadez 20181002156
//Emerson Exequiel Ramos Velasquez 20191004510
#include <iostream>

using namespace std;     //usar libreria namespace std

int main()
{
	int num;           //declarar la variabke  num
	cout << "Programa que escribe los numeros del 1 al 1000 de 25 en 25" << endl; //titulo del programa
	cout<<"\n";
	
		    for(num=1;num<=1000;num++)    //se repite el numeo del 1 al 1000 y se incremente de uno en 1
				if(num%25==0)             //si num%25 es iguak a 0 entonces se imprime un espacion y se da un salto de linea y sino solo se imprime un espacio
				cout<<" "<<num<<endl;
				else
				cout<<" "<<num;			 
	return 0;                           //Fin del programa
}
