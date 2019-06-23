#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;

int main () 
{
    int i, quant, tam, cont, soma;
    string linha;
   
   	while(cin >> linha >> quant)
   	{
   		tam = linha.size();
   		soma = 0;

   		for(i = 0; i < tam; i++)
   		{
   			if(linha[i] == 'W')
   			{
   				soma++;
   			}
   			else
   			{
   				for(cont = 0; cont < quant; cont++)
   				{
   					if(linha[i] != 'R')
   					{
   						break;
   					}
   					i++;
   				}
   				i--;
   				soma++;
   			}
   		}
   		cout << soma << endl;
   	}
    return 0;
}