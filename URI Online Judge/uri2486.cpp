#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, quant, quant2, cont = 0;
    string nome;

    while(cin >> quant && quant != 0)
    {
    	for(i = 0; i < quant; i++)
    	{
    		cin >> quant2,
    		getline(cin,nome);

    		if(nome == " suco de laranja")
    		{
    			cont += (quant2 * 120);
    		}
    		else
    		{
    			if(nome == " morango fresco")
    			{
    				cont += (quant2 * 85);
    			}
    			else
    			{
    				if(nome == " mamao")
    				{
    					cont += (quant2 * 85);
    				}
    				else
    				{
    					if(nome == " goiaba vermelha")
    					{
    						cont += (quant2 * 70);
    					}
    					else
    					{
    						if(nome == " manga")
    						{
    							cont += (quant2 * 56);
    						}
    						else
    						{
    							if(nome == " laranja")
    							{
    								cont += (quant2 * 50);
    							}
    							else
    							{
    								if(nome == " brocolis")
    								{
    									cont += (quant2 * 34);
    								}
    							}
    						}
    					}
    				}
    			}
    		}
    	}
		if(cont >= 110 && cont <= 130)
		{
			cout << cont << " mg" << endl;
		}
		else
		{
			if(cont < 110)
			{
				cout << "Mais " << 110 - cont << " mg" << endl;
			}
			else
			{
				cout << "Menos " << cont - 130 << " mg" << endl;
			}
		}
    	cont = 0;
    	
    }
    
    return 0;
}