#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () 
{
    int i, j, quant, tam, cont;
    string palavra1, palavra2;

    cin >> quant;
   
   	for(i = 0; i < quant; i++)
   	{
   		cin >> palavra1 >> palavra2;
   		cont = 0;

   		tam = palavra1.size();

   		for(j = 0; j < tam; j++)
   		{
   			while(palavra1[j] != palavra2[j])
   			{
   				if(palavra1[j] == 'z')
   				{
   					palavra1[j] = 'a';
   				}
   				else
   				{
   	   				palavra1[j] += 1;				
   				}
   				cont++;
   			}
   			
   		}
   		cout << cont << endl;
   	}

    return 0;
}