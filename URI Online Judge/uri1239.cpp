#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, tam, flag1, flag2;
    string linha;

   
   	while(getline(cin, linha))
   	{
   		tam = linha.size();
   		flag1 = 0;
   		flag2 = 0;
   		for(j = 0; j < tam; j++)
   		{
   			if(linha[j] == '_')
   			{
   				if(flag1 % 2 == 0)
   				{
   					cout << "<i>";
   				}
   				else
   				{
   					cout << "</i>"; 
   				}
   				flag1 ++;
   			}
   			else
   			{
   				if(linha[j] == '*')
   				{
   					if(flag2 % 2 == 0)
   					{
   						cout << "<b>";
   					}
   					else
   					{
   						cout << "</b>";
   					}
   					flag2 ++;
   				}
   				else
   				{
   					cout << linha[j];
   				}
   			}
   		}
   		cout << endl;
   	}
    return 0;
}