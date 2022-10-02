#include <iostream>
using namespace std;
int menu();
void girarDerecha(int &girar);
void girarIzquierda(int &girar);
void avanzar(int tablero[][20],int rt,int &r,int &c,int pluma,int girar,int avanze);
void mostrarDibujo(int piso[][20],int rt);
main()
{
    int op,pluma=0,girar=2,r=0,c=0,avanze=0;
	int piso[20][20]={0};
    do
    {
        op=menu();
        switch(op)
        {
            case 1:
                pluma=0;
                break;
            case 2:
                pluma=1;
                break;
            case 3:
                girarDerecha(girar);
                break;
            case 4:
                girarIzquierda(girar);
                break;
            case 5:
                cout << "¿Cuantos espacios quiere avanzar?"<<endl;
                cin >> avanze;
                avanzar(piso,20,r,c,pluma,girar,avanze);
                break;
            case 6:
                mostrarDibujo(piso,20);
                break;
            case 7:
                if (pluma==0)
                {
                    cout<<"La tortuga esta en: "<<r<<","<<c<<endl;
					cout<<"Viendo hacia: "<<girar<<endl; 
					cout<<"Con la pluma arriba"<<endl;
                }
                else
                {
                	cout<<"La tortuga esta en: "<<r<<","<<c<<endl;
					cout<<"Viendo hacia: "<<girar<<endl; 
					cout<<"Con la pluma abajo"<<endl;
				}
        }
    } while(op!=0);
    return 0;
}
int menu()
{
	cout<<"***********MENU DE OPCIONES*********** \n";
	cout<<"(1) Pluma Abajo \n";
	cout<<"(2) Pluma Arriva\n";
	cout<<"(3) Girar Derecha\n";
	cout<<"(4) Girar Izquierda\n";
	cout<<"(5) Avanzar\n";
	cout<<"(6) Imprimir \n";
	cout<<"(7) Posicion de tortuga \n";
	cout<<"(0) SALIR \n";
	int op;
	cin>>op;
	return op;
}
void girarDerecha(int &girar)
{
    switch(girar)
    {
	    case 2:
	        girar=4;
	        break;
	    case 4:
	        girar=8;
	        break;
	    case 8:
	        girar=6;
	        break;
	    case 6:
	        girar=2;
	        break;
    }
}
void girarIzquierda(int &girar)
{
    switch(girar)
    {
	    case 2:
	        girar=6;
	        break;
	    case 4:
	        girar=2;
	        break;
	    case 8:
	        girar=4;
	        break;
	    case 6:
	        girar=8;
	        break;
    }
}
void avanzar(int piso[][20],int rt,int &r,int &c,int pluma,int girar,int avanze)
{
    if (pluma=0)
    {
        switch(girar)
        {
    	    case 2:
        	    for (int a=0;a<=avanze;a++)
            	{
                	if (r<20)
                	{
                    	piso[r][c]=0;
                    	r++;
                	}
            	}
            	if(r>avanze)
                	r--;
            	break;
	        case 4:
	            for (int b=avanze;b>=0;b--)
	            {
	                if(c>=0)
	                {
	                    piso[r][c]=0;
	                    c--;
	                }
	                if (c<0)
	                c++;
	            }
	            break;
	        case 6:
	            for (int b=0;b<=avanze;b++)
	            {
	               if (c<20)
	                {
	                    piso[r][c]=0;
	                    c++;
	                }
	            }
	            if(c>avanze)
	                c--;
	            break;
	        case 8:
	            for (int a=avanze;a>=0;a--)
	            {
	                if(r>=0)
	                {
	                    piso[r][c]=1;
	                    r--;
	                }
	                if (r<0)
	                    r++;
	            }
	            break;
        }
    }
    else
        switch(girar)
        {
	        case 2:
	            for (int a=0;a<=avanze;a++)
	            {
	                if (r<20)
	                {
	                    piso[r][c]=1;
	                    r++;
	                }
	            }
	            if(r>avanze)
	                r--;
	            break;
	        case 4:
	            for (int b=avanze;b>=0;b--)
	            {
	                if(c>=0)
	                {
	                    piso[r][c]=1;
	                    c--;
	                }
	                if (c<0)
	                    c++;
	            }
	            break;
	        case 6:
	            for (int b=0;b<=avanze;b++)
	            {
	               if (c<20)
	                {
	                    piso[r][c]=1;
	                    c++;
	                }
	            }
	            if(c>avanze)
	                c--;
	            break;
	        case 8:
	            for (int a=avanze;a>=0;a--)
	            {
	                if(r>=0)
	                {
	                    piso[r][c]=1;
	                    r--;
	                }
	                if (r<0)
	                    r++;
	            }
	            break;
        }
}
void mostrarDibujo(int piso[][20],int rt)
{
    for (int r=0;r<rt;r++)
    {
        for (int c=0;c<20;c++)
        {
            cout<<piso[r][c]<< "  ";
        }
        cout<<endl;
    }
}
