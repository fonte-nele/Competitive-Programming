#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main () 
{
    int i, j, cont = 0, tam;
    string nome[1001];

    while(getline(cin, nome[cont])) 
    {
    	cont ++;
    }
    string copia[cont];
    int pos;
    for(i = 0; i < cont; i++)
	{
		copia[i] = nome[i];
		tam = nome[i].size();
		for(j = 0; j < tam; j++)
		{
			copia[i][j] = tolower(nome[i][j]);
		}
	}
	string maior = copia[0];
	pos = 0;
	for(i = 1; i < cont; i++)
	{
		if(maior < copia[i])
		{
			maior = copia[i];
			pos = i;
		}
	}
	cout << nome[pos] << endl;
    return 0;
}
