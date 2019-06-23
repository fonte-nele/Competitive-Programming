#include <iostream>
using namespace std;

int main () 
{
    int i, j, tam, tam2, cont;

    while(cin >> tam)
    {
    	cont = tam / 2;
    	tam2 = 1;
    	for(i = 0; i < (tam/2) + 1; i++)
    	{
    		for(j = 0; j < cont; j++)
    			cout << ' ';

    		for(j = 0; j < tam2; j++)
    			cout << '*';

    		cout << endl;
    		cont --;
    		tam2 += 2;
    	}
    	cont = tam/2;
    	for(j = 0; j < cont; j++)
    	{
    		cout << ' ';
    	}
    	cout << '*' << endl;
    	cont --;

    	for(j = 0; j < cont; j++)
    	{
    		cout << ' ';
    	}
    	cout << "***" << endl;

    	cout << endl;
    }
    
    return 0;
}