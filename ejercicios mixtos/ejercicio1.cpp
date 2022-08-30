 /*Escriba un programa en C que, al recibir como dato un número entero positivo, determine si es par o impar. Utilizar una función tipo boolean.*/
 #include<iostream>
 
 using namespace std;
 
bool positivo(int posi){
	if (posi % 2 == 0)
		return true;
	else
		return false;
	}//fin de la funcion positivo
 
 void Mensaje(){
	 cout<<"\t///////////////////////////////////////////////////////////////////////////////////////\n";
	 cout<<"\tPrograma que al recibir como dato un numero entero positivo determina si es par o impar"<<endl;
	 cout<<"\t///////////////////////////////////////////////////////////////////////////////////////\n";
	 }
	 
 int main(){
	 int num;
	 Mensaje();
	 cout<<"\n";
		do{
			cout<<"\n----------------------------------\n";
			cout<<"Ingrese un numero entero positivo\n";
			cin>>num;
			if(num<0)
			cout<<"El numero debe ser positivo\n**********************************\n";
		}while(num<0);
			 
	 if(positivo(num) == true)
		cout<<"\nEl numero ingresado es PAR\n";
	 else
		cout<<"\nEl numero ingresado es IMPAR\n";
	return 0;
}
