#include <iostream>
#include <string>
using namespace std;


int main () 
{
    int i, j, k, quant, cont, tam, pos;
    string linha;
    cin >> quant;
    getline(cin, linha);
    for(k = 0; k < quant; k++)
    {
    	getline(cin, linha);

    	cont = 0, pos = 0;
    	tam = linha.size();

    	string v[50];

    	for(j = 0; j < tam; j++)
    	{
    		if(linha[j] == ' ')
    		{
    			v[cont] = linha.substr(pos, j-pos);
    			pos = j+1;
    			cont++;
    		}
    	}
    	v[cont] = linha.substr(pos, tam-pos);
    	cont++;
    	
    	//Ordenação Insertion
    	string aux;
	    for(i = 1; i < cont ;i++)
		{
			aux = v[i];
			j = i-1;
			
			while(j>=0 && aux.size() > v[j].size())
			{
				v[j+1] = v[j];
				j--;
			}
			v[j+1] = aux;
		}
	    

		for(j = 0; j < cont; j++)
    	{
    		if(j != cont-1)
    		{
    			cout << v[j] << " ";
    		}
    		else
    		{
    			cout << v[j] << endl;
    		}
    	}
    }

    return 0;
}