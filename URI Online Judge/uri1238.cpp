#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () 
{
    int i, j, quant, tam, tam1, tam2, pos1, pos2;
    string palavra1, palavra2;

    cin >> quant;
   
   	for(i = 0; i < quant; i++)
   	{
   		cin >> palavra1 >> palavra2;
   		string result;
   		pos1 = 0;
   		pos2 = 0;
   		tam1 = palavra1.size();
   		tam2 = palavra2.size();
   		tam = 2 * min(tam1,tam2);
   		for(j = 0; j < tam; j++)
   		{
   			if(j % 2 == 0)
   			{
   				result[j] = palavra1[pos1];
   				pos1++;
   			}
   			else
   			{
   				result[j] = palavra2[pos2];
   				pos2++;
   			}
   			cout << result[j];
   		}
   		if(tam1 < tam2)
   		{
   			for(j = tam; j < (tam2*2); j++)
   			{
   				if(palavra2[pos2] == '\n' || palavra2[pos2] == '\0')
   				{
   					break;
   				}
   				result[j] = palavra2[pos2];
   				pos2++;
   				cout << result[j];
   			}
   		}
   		else
   		{
   			for(j = tam; j < (tam1*2); j++)
   			{
   				if(palavra1[pos1] == '\n' || palavra1[pos1] == '\0')
   				{
   					break;
   				}
   				result[j] = palavra1[pos1];
   				pos1++;
   				cout << result[j];
   			}
   		}
   		cout << endl;
   	}

    return 0;
}