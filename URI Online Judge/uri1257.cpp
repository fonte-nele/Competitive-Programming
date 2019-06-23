#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, k, quant, num, tam, soma, valor;
    string linha;

    cin >> quant;
   	for(i = 0; i < quant; i++)
   	{
   		soma = 0;
   		cin >> num;
   		getline(cin, linha);
   		for(j = 0; j < num; j++)
   		{
   			getline(cin,linha);
			tam = linha.size();
			for(k = 0; k < tam; k++)
			{
				valor = linha[k] - 65;
				
				soma += (j + valor + k);
			}
   		}
   		cout << soma << endl;
   	}
    return 0;
}