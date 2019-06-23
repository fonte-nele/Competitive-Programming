#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;

int main () 
{
    int i, tam, pos, cont;
    string linha;
   
   	while(getline(cin, linha))
   	{
   		tam = linha.size();
   		cont = 0;
   		pos = 1;

   		for(i = 0; i < tam; i++)
   		{
   			if(linha[i] == ' ')
   			{
   				cont++;
   			}
   		}
   		char v[cont];
   		cont = 0;
   		v[0] = tolower(linha[0]);
   		for(i = 1; i < tam; i++)
   		{
   			if(linha[i] == ' ')
   			{
   				v[pos] = tolower(linha[i+1]);
   				pos++;
   			}
   		}
   		bool flag = true;
   		for(i = 0; i < pos-1; i++)
   		{
   			if(v[i] == v[i+1])
   			{
   				if(flag)
   				{
   					cont++;
   					flag = false;
   				}
   			}
   			else
   			{
   				if(!flag)
   				{
   					flag = true;
   				}
   			}
   		}
   		cout << cont << endl;
   	}
    return 0;
}