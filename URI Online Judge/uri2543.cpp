#include <iostream>
using namespace std;

int main()
{
    int i, aux, quant, id, codigo, cont = 0;

    while(cin >> quant >> id)
    {
    	for(i = 0; i < quant; i++)
    	{
    		cin >> codigo >> aux;
    		if(codigo == id && aux == 0)
    			cont++;
    	}
	    cout << cont << endl;
	    cont = 0;
    }
    
    return 0;
}