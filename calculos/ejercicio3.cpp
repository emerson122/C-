/* Escriba un programa en C++ que, al recibir como dato un número de cuatro dígitos, genere una impresión como la que se muestra a continuación (tomando como ejemplo el número 4325)*/
#include <iostream>                                                  //incluir libreria iostream

using std::cout;
using std::cin;
using std::endl;                                                      //uso de libreria std::endl,std::cin,std::cout para la simplificacion del programa

int main() {
    int numero = 0, provis = 0;                                      //declaracion de variables numero , provisional y divisor
    int divisor = 1;
    
    cout << "Ingrese un numero de cuatro digitos: ";                 //peticion de entrada de datos de 4 numeros 
    cin >> numero;                                                   //guardar los numeros en la variable numero
    if (numero>=1000){                                               //instruccion if para que los numeros ingresados no sean menores de 4 digitos
        if (numero<=9999){                                           //instruccion if para que los numeros no sean mayores a 4 digitos
    	provis = numero;                                                 //variable temporal es igual a la variable numero
    	while (numero >= 1000){                                      //se utiliza la sentencia while(mientras) porque mientas numero sea mayor o igual 1000 se seguira ejecutando
        
                                                                
   	 	while(provis/10!=0){                                             //encontrar el  valor del divisor
        provis = provis/10;          
        divisor = divisor*10;           
    }
    
    while(divisor!=0){
        cout << numero/divisor;
        if(divisor/10!=0){
            cout << "\n";
        }
        numero = numero%divisor;
        divisor = divisor/10;                                          //fin de las operaciones aritmeticas
    }
    cout << "\n";                                                      //insertar un salto de linea
    }
    }
    else{
        cout<<"el numero ingresado es mayor de cuatro digitos"<<endl;   // instruccion else que se despliegara si el numero es mayor de cuatro digitos
        
    }
    }
    
    else {
        cout<<"el numero ingresado es menor de 4 digitos"<<endl;        //instruccion else que se despliegara si el numero es menor d cuatro digiyod
        
    }
    return 0;   
}
