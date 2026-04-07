#include <iostream>

using namespace std;

int datos[5];//MUESTRA DATOS INGRESADOS

int main()
{
    for(int x=0; x<5; x++)
    {
        cout<<"INGRESA UN NUMERO : "; cin>>datos[x];
    }
    
    for(int y=0; y<5; y++)
    {
        cout<<datos[y]<<" | ";
    }
    
    return 0;
}
