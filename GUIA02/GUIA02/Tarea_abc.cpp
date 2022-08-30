/* Programa que imprime el Abecedario de la A-Z y de Z-A */
#include<iostream>

using namespace std;

int main(){
    char letra;
    int num;
    
    cout<<"Programa que imprime el Abecedario de la A-Z y de Z-A"<<endl;
    cout<<"\n";
    cout<<"\tSeleccione una opcion\n";
    cout<<"1.Acendente\t";
    cout<<"2.Decendente\n";
    cin>>num;

    if (num==1){
        cout<<"\n";

        for(letra='A';letra<='Z'; letra++){
            
            cout<<letra<<endl;

        }
    }
    if (num==2){
        cout<<"\n";
        
        for (letra='Z';letra>='A'; letra--){
            
            cout<<letra<<endl;
        }
    }
    



    return 0;
}
