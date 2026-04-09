#include <iostream>

using namespace std;

int main()//INGRESO Y SUMA DE DATOS, SI SE INGRESA UN CERO SE TERMINA EL PROGRAMA
{
    int datos[100];
    int num;
    int suma = 0;
    int x = 0;
    
    while(x<100)
    {
        cout<<"INGRESA UN NUMERO : ";
        cin>>num;
        
        if(num == 0)
        {
            break;
        }
        
        else
        {
            datos[x] = num;
            suma += datos[x];
            x++;
        }
        
    }
    
    cout<<endl<<endl;
    cout<<"LOS DATOS INGRESADOS FUERON..."<<endl;
    
    int y = 0;
    
    while(y<x)
    {
        cout<<datos[y]<<" | ";
        y++;
    }
    
    cout<<endl<<endl;
    cout<<"LA SUMA DE LOS DATOS INGRESADOS ES | "<<suma<<" |"<<endl;

    return 0;
}
