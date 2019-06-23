#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, k, tam1, tam2, cont, maior;
    string palavra1, palavra2;

   
   	while(getline(cin, palavra1))
   	{
   		getline(cin, palavra2);
   		tam1 = palavra1.size();
   		tam2 = palavra2.size();
   		cont = 0;
   		maior = 0;

   		for(i = 0; i < tam1; i++)
   		{
   			for(j = 0; j < tam2; j++)
   			{
   				cont = 0;
   				for(k = 0; k+i < tam1, k+j < tam2; k++)
   				{
   					if(palavra1[k+i] != palavra2[k+j])
   					{
   						break;
   					}
   					cont++;
   				}
   				if(cont > maior)
   				{
   					maior = cont;
   				}
   			}
   		}
   		cout << maior << endl;
   	}
    return 0;
}