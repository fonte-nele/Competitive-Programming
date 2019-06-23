#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant, tam, cont;
    bool v[26];
    string linha;

    cin >> quant;
    getline(cin, linha);
   	for(i = 0; i < quant; i++)
   	{
   		getline(cin, linha);

   		tam = linha.size();
   		cont = 0;
   		for(j = 0; j < 26; j++)
   		{
   			v[j] = false;
   		}
   		for(j = 0; j < tam; j++)
   		{
   			if(linha[j] >= 'a' && linha[j] <= 'z')
   			{
   				if(!v[linha[j] - 97])
   				{
   					v[linha[j] - 97] = true;
   				}
   			}
   		}
   		for(j = 0; j < 26; j++)
   		{
   			if(v[j])
   			{
   				cont++;
   			}
   		}
   		if(cont == 26)
   		{
   			cout << "frase completa" << endl;
   		}
   		else
   		{
   			if(cont >= 13)
   			{
   				cout << "frase quase completa" << endl;
   			}
   			else
   			{
   				cout << "frase mal elaborada" << endl;
   			}
   		}
   	}
    return 0;
}