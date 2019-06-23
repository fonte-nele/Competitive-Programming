#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, tam, pos;
    string palavra;

    while(cin >> palavra && palavra != "0")
    {
    	tam = palavra.size();

    	for(i = 0; i < tam; i++)
    	{
    		pos = -2;
	    	do{
	    		pos = palavra.find(palavra[i],i+1);
	    		if(pos == -1)
	    		{
	    			break;
	    		}

	    		palavra.erase(pos, 1);
	    	}while(pos !=  -1);
	    }
    	
    	tam = palavra.size();
    	unsigned long long int valor = 1;
    	for(i = 1; i <= tam; i++)
    	{
    		valor *= i;
    	}
    	cout << valor << endl;
    }
    return 0;
}