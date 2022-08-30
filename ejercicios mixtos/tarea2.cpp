/* Ejercicio en el cual permite encontrar la suma de dos numeros utilizando funcion 
 * por valor y mostrar el numero mayor por referencia*/
#include<iostream>

using namespace std;

void mensaje(){
	cout<<"\tPrograma que permite encontrar la suma de 2 numero\n";
	cout<<"\t\ty cual de los dos es mayor al otro\n";	
	}
int sum(int vnum1,int vnum2, int *refmay){
	int resul;
	resul = vnum1+vnum2;
	if(vnum1>vnum2)
		*refmay=vnum1;
	else
		*refmay=vnum2;		
	return resul;
	}
int main(){
    int num1,num2,refmay;
    mensaje();
    cout<<"\nIngrese el primer numero\n";
    cout<<">";cin>>num1;
    cout<<"\nIngrese el segundo numero\n";
    cout<<">";cin>>num2;
    cout<<"\nLa suma es: "<<sum(num1,num2,&refmay)<<endl;
    cout<<"El mayor es: "<<refmay<<endl;
    return 0;
}
