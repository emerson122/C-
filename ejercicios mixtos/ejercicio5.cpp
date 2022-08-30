/*    5. Realizar un programa que calcule el precio a pagar de un producto de acuerdo con lo siguiente:
*        a. Si el precio es menor a 100 no hay descuento
*        b. Si el precio está entre 100 y 1000 recibe un descuento de 2%
*        c. Si el precio es mayor a 1000 recibe un descuento de 4%
* El programa debe mostrar el valor del descuento concedido y el nuevo precio. Se debe validar que el número ingresado sea mayor que cero. 
*/ 
#include<iostream>
char nom[30];
using namespace std;

void mensaje(){
	cout<<"\t/////////////////////////////////////////////////////\n";
	cout<<"\t//Programa que calcula el descuento para el usuario//\n";
	cout<<"\t/////////////////////////////////////////////////////\n";
	
	}
void lect(int vnum, int *mayor) {

	if(vnum>*mayor)
	*mayor=vnum;
}
	
void datos(){
	cout<<"\nIngrese el nombre del producto:\n";
	cout<<"> ";cin>>nom;
	}
void descuentos(float npre,float *descu){
	if(npre<100){
		*descu=0;
	}
			else if((npre>100) && (npre<1000)){
				*descu=npre*0.02;
			}
				else if(npre>1000){
					*descu=npre*0.04;
				}	
}
int main(){
    float total=0,descu=0,pre;
	mensaje();
	datos();
	do{
		cout<<"\n----------------------------------\n";
		cout<<"Ingrese el precio del producto\n";
		cout<<"> ";cin>>pre;
		cout<<"\n----------------------------------\n";
		if(pre<0)
		cout<<"El precio debe ser mayor a 0\n**********************************\n";
	}while(pre<0);
	descuentos(pre,&descu);
	cout<<"Producto seleccionado: "<<nom<<endl;
	cout<<"Su descuento es de "<<"L. "<<descu<<endl;
	total=pre-descu;
	cout<<"El total a pagar es: "<<"L. "<<total<<endl;
	return 0;
	}
