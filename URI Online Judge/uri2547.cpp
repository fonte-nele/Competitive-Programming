#include <iostream>
using namespace std;

int main()
{
    int i, quant, cont = 0, altura, altura1, altura2;

    while(cin >> quant >> altura1 >> altura2)
    {
    	
    	for(i = 0; i < quant; i++)
    	{
    		cin >> altura;

	    	if(altura >= altura1 && altura <= altura2)
	    		cont++;

    	}
		cout << cont << endl;
	    cont = 0;	    	
    }
    
    return 0;
}