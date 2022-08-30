/* Construya un programa en C++ que indique si dados dos números introducidos por teclado uno es divisor del otro. */

#include<iostream>                                            //incluir la libreria iostream

using std::cout;
using std::endl;
using std::cin;                                              //simplificar el programa con la libreria std:

int main(){
    int num1,num2;                                           //Declarar variables numero1 y numero2
    
    cout<<"ingrese un numero mayor: "<<endl;                 //peticion del primer dato de un numero mayor al usuario
    cin>>num1;                                               //guardar el primer dato del usuario en la variable num1
    cout<<"Ingrese un numero menor: "<<endl;                 //peticion del segundo dato un numero menor al usuario
    cin>>num2;                                               //Guardar el segundo dato en la variable num2
    
    if(num1%num2==0){                                        //si el division de numero1 y numero 2 es = 0 si es un divisor
        
        cout<<"******************************************\n"; 
        cout<<num2<<" es un divisor de "<<num1<<endl;         //impresion afirmando que si es un divisor
        cout<<"******************************************\n";
    }
    else{
        cout<<"******************************************\n";
        cout<<num2<<" no es un divisor de "<<num1<<endl;      //impresion afirmando que no es un divisor
        cout<<"******************************************\n";
        
    }
    
    return 0;                                                 //fin del programa
}
