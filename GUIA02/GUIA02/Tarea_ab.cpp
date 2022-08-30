//Programa para imprimir las letras del abecedario

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
     
     char letra;
     cout<<"Programa que imprime el abecedario"<<endl;
     
     for(letra= 'A';letra<='Z'; letra++){
        cout<<letra<<endl;
     }
     return 0;
}
