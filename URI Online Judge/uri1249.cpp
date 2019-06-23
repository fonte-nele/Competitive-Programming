#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant, tam;
    string linha;

   	while(getline(cin,linha))
   	{
		tam = linha.size();
		for(j = 0; j < tam; j++)
		{
			if((linha[j] >= 'a' && linha[j] <= 'z') || (linha[j] >= 'A' && linha[j] <= 'Z'))
			{
				if(linha[j] >= 'a' && linha[j] <= 'z')
				{
					for(i = 0; i < 13; i++)
					{
						if(linha[j] == 'z')
						{
							linha[j] = 'a';
						}
						else
						{
							linha[j] += 1;
						}
					}
				}
				else
				{
					for(i = 0; i < 13; i++)
					{
						if(linha[j] == 'Z')
						{
							linha[j] = 'A';
						}
						else
						{
							linha[j] += 1;
						}
					}
				}
				cout << linha[j];
			}
			else
			{
				cout << linha[j];
			}
		}
		cout << endl;
   	}

    return 0;
}