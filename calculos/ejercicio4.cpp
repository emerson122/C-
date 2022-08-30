/* programa en C++ que, al recibir como datos el nivel académico de un profesor de una universidad, así como su salario, incremente este último siguiente las especificaciones de la siguiente tabla, e imprima tanto el nivel del profesor como su nuevo salario.*/

#include <iostream> //incluir la libreria iostream

using namespace std; //uso de la libreria namespace para simplificar el programa

int main()
{
    int nivel,sal; //Declaracion de variables nivel y salario(sal)
    int nuevosal;  //Declaracion de variable nuevosalaraio(nuevosal)
	cout << "Programa que al recibir un dato de nivel academico de un profesor de universidad y su salariolo incrementa dependiendo de su nivel academico." << endl;//impresion de titulo
	cout<<"\n";                                                                          //salto de linea
	cout << "Ingrese el nivel academico del profesor de la Universidad 1-4: " << endl;  //peticion de datos del nivel del profesor de la universidad
	cin>>nivel;                                                                         //Guardar datos  en la variable nivel 
	cout << "Ingrese su salario: " << endl;                                             //peticion de datos del salario
	cin>>sal;                                                                           //guardar los datos en la variable sal 
	
	if(nivel==0){
    cout<<"El nivel ingresado es incorrecto"<<endl;
    }			
	if(nivel==1){                                                                            //instruccion 1 donde el incremento es de 3.2%
     nuevosal = (sal+(sal*0.032));    //variable sal*3.2 es igual al nuevo salario
        cout<<"Nivel del Profesor es: "<<nivel<<endl;
        cout<<"Su nuevo salario es: "<<nuevosal<<endl;
	}	
	else if(nivel==2){//Instruccion 2 donde el incremento es del 4.5%
        nuevosal = (sal+(sal*0.045));
        cout<<"Nivel del Profesor: "<<nivel<<endl;
        cout<<"Su nuevo salario es: "<<nuevosal<<endl;
        
	}
	if(nivel==3){//instrucciones 3 donde el incremento es del 5.0%
        nuevosal = (sal+(sal*0.050));
        cout<<"Nivel del Profesor: "<<nivel<<endl;
        cout<<"Su nuevo salario es: "<<nuevosal<<endl;
	}
	if(nivel==4){ //instruccion 4 donde el incremento es de 6.3%
        nuevosal = (sal+(sal*0.063)); 
        cout<<"Nivel del Profesor: "<<nivel<<endl;
        cout<<"Su nuevo salario es: "<<nuevosal<<endl;
	}
	else if(nivel >= 5){
    cout<<"El nivel ingresado no es correcto"<<endl;
	}	
	return 0;
}
