/*Construya un diagrama de flujo y el correspondiente programa en C++ que, al 
* recibir como dato el salario de un profesor universitario, calcule el incremento del salario de 
* acuerdo con el siguiente criterio y escriba el nuevo salario del profesor: */
#include <iostream>   //se incluye la libreria iostream

using namespace std; //se usa la libreria namespace

int main()
{
	float sal,nuevosal;  //se define las variables como flotantes
	cout << "Programa en C++ que al recibir como dato el salario de un profesor universitariocalcule el incremento del salario de acuerdo con el siguiente criterio y escribael nuevo salario del profesor:" << endl;
	cout <<" \n";
	cout << "Ingrese el salario del profesor universitario:\n";  //peticion de datos del salario al usuario
	cin >> sal;
	if (sal < 10000){                                           //inicio de sentecia si sal es menor 10000 se incrementa el 6%
	nuevosal =sal+(sal*0.06);
}
	else if((sal >= 10000) && (sal <= 25000)){                  //si es mayor o igual a  10000 y menor o igual 25000
	nuevosal = sal+(sal*0.04);
}
	else if ((sal > 25000) && (sal <= 40000)){                  //si mayor a 25000 y menor a 40000
		nuevosal = sal+(sal*0.035);
}
	else if(sal >40000) {
	nuevosal = sal+(sal*0.02);                                   //si es mayor a 40000
}	

	cout<<"El nuevo salario del profesor: "<<nuevosal<<endl;
	
	return 0;
}
