#include <iostream>

using namespace std;

int arreglo[5]={4,7,2,9,3}; //BUSCA EL DATO MAYOR DEL ARREGLO
int mayor = arreglo[0];

int main()
{
    for(int x=0; x<5; x++)
    {
        if(arreglo[x] > mayor)
        {
            mayor = arreglo[x];
        }
    }
    
    cout<<"EL NUMERO MAYOR DEL ARREGLO ES "<<mayor;
    
    return 0;
}
