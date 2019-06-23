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
   			if((linha[j] >= 'a' && linha[j] <= 'z') || (linha[j] >= 'A' && linha[j] <= 'Z'))
   			{
   				linha[j] += 3;
   			}
   		}
   		string inverso;
   		for(j = tam-1; j >= 0; j--)
   		{
   			inverso += linha[j];
   		}
   		for(j = tam/2; j < tam; j++)
   		{
   			inverso[j] -= 1;
   		}
   		cout << inverso << endl;
   	}

    return 0;
}