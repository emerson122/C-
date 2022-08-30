/* Construya el correspondiente programa en C++ que, al recibir como dato de entrada el costo de un artículo vendido y la cantidad de dinero entregada por el cliente, calcule e imprima el cambio que se debe entregar al cliente. */

#include<iostream>                                    //libreria de isotream

using std::cout;
using std::cin;
using std::endl;                                      //simplificar el programa con la libreria std:

int main(){
    float costo,pago,cambio;                           //declaracion de variables costo, pago,cambio;
    
    cout<<"Ingrese el costo del articulo vendido:\n";  //impresion de la peticion de datos de costo  al usuario
    cin>>costo;                                        //guardar los datos en la variable costo
    cout<<"ingrese la cantidad de dinero: \n";         //impresion de peticion de datos de cantidad al usuario
    cin>>pago;                                         //guardar datos en la variable pago
    
    cambio = (pago-costo);                             //cambio es igual al pago - el costo
    
    cout<<"El cambio es: "<<cambio<<endl;              //impresion de dato final 
    
    return 0;                                          //fin del programa
}
