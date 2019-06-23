#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, tam, tamLinha, quant, pos;
    bool flag;

    cin >> quant;
    string linha, palavra;

    for(i = 0; i < quant; i++)
    {
    	getline(cin, linha);
    	getline(cin, linha);
	    tamLinha = linha.size();
	    cin >> palavra;
    	tam = palavra.size();

    	pos = -2;
    	flag = false;

    	do{
    		pos = linha.find(palavra,pos+2);

    		if((linha[pos-1] == ' ' || pos == 0) && (linha[pos+tam] == ' ' || pos == tamLinha-tam))
    		{    			
    			if(flag)
	    		{
	    			cout << " " << pos;
	    		}
	    		else
	    		{
	    			cout << pos;
	    		}
	    		flag = true;
    		}
    	}while(pos !=  -1);
    	
    	if(!flag)
    	{
    		cout << -1;
    	}

    	cout << endl;
    }
    return 0;
}