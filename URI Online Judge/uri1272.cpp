#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant, tam;
    string linha;

    cin >> quant;
    getline(cin, linha);
   	for(i = 0; i < quant; i++)
   	{
   		getline(cin,linha);

   		tam = linha.size();
   		for(j = 0; j < tam; j++)
   		{
   			if(j == 0 && linha[j] != ' ')
   			{
   				cout << linha[j];
   			}
   			if(linha[j] == ' ')
   			{
   				if(linha[j+1] >= 'a' && linha[j+1] <= 'z')
   				{
   					cout << linha[j+1];
   				}
   			}
   		}
   		cout << endl;
   		
   	}

    return 0;
}