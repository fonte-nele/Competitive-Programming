#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int j, tam, pos = 0, maior = 0;
    string linha, palavra, palavraMaior;

    getline(cin, linha);
    while(linha[0] != '0' && linha.size() != 1)
    {
    	if(linha[0] == '0' && linha.size() == 1)
    	{
    		break;
    	}

    	tam = linha.size();
    	for(j = 0; j < tam; j++)
    	{
    		if(linha[j] == ' ')
    		{
    			palavra = linha.substr(pos, j-pos);
    			pos = j+1;
    			if(palavra.size() >= maior)
    			{
    				palavraMaior = palavra;
    				maior = palavra.size();
    			}
    			cout << palavra.size() << "-";
    		}
    	}
    	palavra = linha.substr(pos,j);
    	if(palavra.size() >= maior)
		{
			palavraMaior = palavra;
			maior = palavra.size();
		}
    	cout << palavra.size() << endl;

    	getline(cin, linha);
  		pos = 0;
    }
	cout << endl << "The biggest word: " << palavraMaior << endl;

    return 0;
}