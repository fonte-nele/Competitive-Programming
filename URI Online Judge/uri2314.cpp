#include <iostream>
#include <string>
using namespace std;

void imprimir(int quant)
{
	for(int i = 0; i < quant; i++)
	{
		cout << '.';
	}
}

int main () 
{
    int j, tam, pos = 0, quant = 0;
    string linha, aux;

    while(getline(cin,linha))
    {
    	
    	if(linha[0] == '#')
    	{
    		cout << linha << endl;
    	}
    	else
    	{
    		tam = linha.size();
    		for(j = 0; j < tam; j++)
	    	{
	    		if(linha[j] == ';')
	    		{
	    			aux = linha.substr(pos, j-pos);
	    			pos = j+1;
	    			cout << aux << ';';

	    			if(aux.find("for") == 0)
	    			{
						while(true)
						{
							if(linha[j] == ')')
							{
								break;
							}
							cout << linha[j+1];
							j++;
						}
						
						cout << endl;
						imprimir(quant);
						cout << '{' << endl;
						quant += 4;
		    			imprimir(quant);
		    			j+=2;
		    			pos = j;
	    			}
	    			else
	    			{
	    				cout << endl;
	    				if(linha[j+1] != '}')
		    			{
		    				imprimir(quant);
		    			}
	    			}
	    		}
	    		if(linha[j] == '{')
	    		{
	    			cout << linha.substr(pos, j-pos) << endl;
	    			imprimir(quant);
	    			cout << '{' << endl;
	    			quant += 4;
	    			imprimir(quant);
	    			pos = j+1;
	       		}
	       		if(linha[j] == '}')
	       		{
	    			if(linha[j+1] != '}' && linha[j+1] != '\0')
	    			{
		    			quant -= 4;
		    			imprimir(quant);
		    			cout << '}' << endl;
		    			imprimir(quant);
		    			pos = j+1;
		    		}
		    		else
		    		{
		    			if(linha[j+1] == '}')
		    			{
		    				quant -= 4;
			    			imprimir(quant);
			    			cout << '}' << endl;
			    			quant -= 4;
			    			imprimir(quant);
			    			pos = j+1;
			    			
			    			cout << '}' << endl;
			    			imprimir(quant);
			    			j++;
			    			pos = j+1;
		    			}
		    			else
		    			{
		    				quant -= 4;
		    				imprimir(quant);
		    				cout << '}' << endl;
		    				break;
		    			}
		    		}
	       		}
	    	}
    	}
    	
  		pos = 0;
    }

    return 0;
}