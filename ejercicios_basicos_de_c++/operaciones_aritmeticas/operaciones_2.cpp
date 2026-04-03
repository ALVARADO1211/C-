#include <iostream>

using namespace std;

float a, b, resultado = 0;

int main()
{
	cout<<"INGRESA UN NUMERO : "; cin>>a;
	cout<<"INGRESA OTRO NUMERO : "; cin>>b;
	
	resultado = (a / b) + 1;
	
	cout<<"EL RESULTADO ES : "<<resultado;
	
	return 0;
}
