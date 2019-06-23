#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, pos, quant, soma, cont;

    while(cin >> quant && quant > 0) 
    {
    	char caso[quant];
    	int tempo[quant];
    	string julgamento[quant];
    	for(i = 0; i < quant; i++)
    	{
    		cin >> caso[i] >> tempo[i] >> julgamento[i];
    	}

    	soma = 0;
    	cont = 0;
    	for(i = 0; i < quant; i++)
    	{
    		if(julgamento[i] == "correct")
    		{
    			cont++;
    			soma += tempo[i];

    			pos = i - 1;
    			while(pos >= 0)
    			{
    				if(caso[i] == caso[pos])
    				{
    					soma += 20;
    				}
    				pos--;
    			}
    		}
    	}

		cout << cont << " " << soma << endl;
		
    }
    return 0;
}
