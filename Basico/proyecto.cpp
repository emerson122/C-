#include<iostream>

using namespace std;

int main(){
    float nota1=0,nota2=0,nota3=0,nota4=0,nota5=0,nota6=0, nota7=0, nota8=0, nota9=0, nota10=0, nota11=0, prom = 0, cal = 0 ,res = 0, uv1=0, uv2=0, uv3=0, uv4=0, uv5=0, uv6=0, uv7=0, uv8=0, uv9=0, uv10=0, uv = 0,a1,e2,i3,o4 ,u5;
    char nombre[8];
    char cl1[20], cl2[20],cl3[20], cl4[20], cl5[20];
    
    cout<<"ESCRIBA SU NOMBRE"<<endl; cin>>nombre;
    cout<<"........................................................................."<<endl;
    cout<<"asignatura 1:"; cin>>cl1;
    cout<<"........................................................................."<<endl;
    cout<<"asignatura 2:"; cin>>cl2;
    cout<<"........................................................................."<<endl;
    cout<<"asignatura 3:"; cin>>cl3;
    cout<<"........................................................................."<<endl;
    cout<<"asignatura 4:"; cin>>cl4;
    cout<<"........................................................................."<<endl;
    cout<<"asignatura 5:"; cin>>cl5;
    cout<<"........................................................................."<<endl;
    cout<<"digite sus notas de cada  clases"<<endl;
    cout<<""<<cl1<<"\n"; 
    cin>>nota1;
    
    cout<<""<<cl2<<"\n"; 
    cin>>nota2;
    
    cout<<""<<cl3<<"\n"; 
    cin>>nota3;
    
    cout<<""<<cl4<<"\n"; 
    cin>>nota4;
    cout<<""<<cl5<<"\n"; 
    cin>>nota5;
    cout<<"........................................................................."<<endl;
    cout<<"Ingrese las unidades valorativas de cada clase"<<endl;
    cout<<""<<cl1<<"\n";  cin>>uv1;
    cout<<""<<cl2<<"\n";  cin>>uv2;
    cout<<""<<cl3<<"\n";  cin>>uv3;
    cout<<""<<cl4<<"\n";  cin>>uv4;
    cout<<""<<cl5<<"\n";  cin>>uv5;
    
    uv = uv1+uv2+uv3+uv4+uv5;
    a1 = nota1*uv1;
	e2 = nota2*uv2;
	i3 = nota3*uv3;
	o4 = nota4*uv4;
	u5 = nota5*uv5;
    prom = a1+e2+i3+o4+u5;
	res = prom/uv;
    
    
    cout<<"........................................................................."<<endl;
    cout<<"Estudiante: "<<nombre<<endl;
    cout<<"Total unidades valorativas; "<<uv<<endl;
    cout<<"Promedio de periodo:"<<res<<endl;
    if(res >= 65 && res <=100)
    {
        cout<<"La observacion es: APROBADO"<<endl;
    }
    else
    {
        cout<<"La observacion es: REPROBADO"<<endl;
    }
    
    

    return 0;
}
