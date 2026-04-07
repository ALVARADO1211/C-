#include <iostream>

using namespace std;

int main()//INGRESO Y BUSQUEDA DE DATOS
{
    int datos[5];
    
    for(int x=0; x<5; x++)
    {
        cout<<"INGRESA UN NUMERO : "; cin>>datos[x];
    }
    
    int bus, pos;
    int enc = 0;
    
    cout<<endl;
    cout<<"QUE NUMERO BUSCAS ? "; cin>>bus;
    cout<<endl;
    
    for(int y=0; y<5; y++)
    {
        if(datos[y] == bus)
        {
            enc++;
            pos = y;
        }
    }
    
    if(enc > 0)
    {
        cout<<"EL NUMERO "<<bus<<" FUE ENCONTRADO "<<enc<<" VECES"<<endl;
        cout<<"Y SU ULTIMA POSICION ES LA "<<pos<<endl;
    }
    
    else
    {
        cout<<"DATO NO ENCONTRADO";
    }
    
    
    
    return 0;
}
