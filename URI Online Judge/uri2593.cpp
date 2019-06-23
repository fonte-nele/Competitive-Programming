#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, tam, tamLinha, quant, pos, flag;
    string linha;

    getline(cin, linha);
    tamLinha = linha.size();

    cin >> quant;
    string palavra[quant];

    for(i = 0; i < quant; i++)
    {
    	cin >> palavra[i];
    }

    for(i = 0; i < quant; i++)
    {
    	pos = -2;
    	flag = 0;
    	tam = palavra[i].size();
    	while(pos !=  -1)
    	{
    		pos = linha.find(palavra[i],pos+2);

    		if(pos == -1)
    		{
    			break;
    		}

    		if(pos > 0 && pos < tamLinha-tam)
    		{
    			if(linha[pos-1] == ' ' && linha[pos+tam] == ' ')
    			{
    				flag++;
	    			if(flag > 1)
		    		{
		    			cout << " " << pos;
		    		}
		    		else
		    		{
		    			cout << pos;
		    		}
    			}
    		}
    		else
    		{
    			if(pos == 0 && linha[pos+tam] == ' ')
	    		{
	    			flag++;
	    			if(flag > 1)
		    		{
		    			cout << " " << pos;
		    		}
		    		else
		    		{
		    			cout << pos;
		    		}
	    		}
	    		else
	    		{
	    			if(pos == tamLinha-tam && linha[pos-1] == ' ')
	    			{
	    				flag++;
		    			if(flag > 1)
			    		{
			    			cout << " " << pos;
			    		}
			    		else
			    		{
			    			cout << pos;
			    		}	
	    			}
	    		}
    		}
    	}
    	if(flag == 0)
    	{
    		cout << -1;
    	}
    	cout << endl;
    }
    return 0;
}