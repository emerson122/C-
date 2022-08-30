 /*Escriba un programa en C que, al recibir como dato diez números enteros, determine cuál es el mayor. Utilizar parámetros por referencia.*/
 #include<iostream>
 
 using namespace std;
 

void lect(int vnum, int *mayor) {

		if(vnum>*mayor)
		*mayor=vnum;
	}
	
 int main(){
	int num,mayor=0;
	cout<<"Introduce 10 numeros enteros\n";
	for(int i=1;i<=10;i++){
		cin>>num;
		lect(num,&mayor);
	}		
	 cout<<"El mayor es: "<<mayor<<endl;
	 
	 return 0;
}
