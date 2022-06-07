/*1 Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto con IVA*/

#include<iostream>

using namespace std;

int main(){
    
    char texto[10];
    int precio = 0,iva = 0;
    
    cout<<"Escriba el nombre del producto"<<endl;
    cin >> texto;
    cout<<"Escriba el precio del producto"<<endl;
    cin >> precio;
    
    iva = (precio *15)/100;
    
    cout<<"El impuesto sobre venta del producto: "<<texto<<endl;
    cout<<"es: "<<iva<<endl;
    
    return 0;
}
