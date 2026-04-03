#include <iostream>

using namespace std;

int x, y, aux; //INTERCAMBIO DE DATOS

int main()
{
	cout<<"INGRESA EL VALOR DE X : "; cin>>x;
	cout<<"INGRESA EL VALOR DE Y : "; cin>>y;
	cout<<endl;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"EL NUEVO VALOE DE X ES => "<<x<<endl;
	cout<<"EL NUEVO VALOR DE Y ES => "<<y<<endl;
	
	return 0;
}
