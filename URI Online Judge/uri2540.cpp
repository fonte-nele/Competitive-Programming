#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, quant, soma1 = 0, voto;
    double valor;

    while(cin >> quant)
    {
    	for(i = 0; i < quant; i++)
	    {
	    	cin >> voto;
	    	
	    	if(voto)
	    		soma1 += 1;	    	
	    }

	    valor = (quant / 3.0) * 2.0;
	    
	    if(soma1 >= valor)
			cout << "impeachment" << endl;
		else
			cout << "acusacao arquivada" << endl;

		soma1 = 0;
    }
    
    return 0;
}