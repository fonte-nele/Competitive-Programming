#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

void frequencia(int *v, char carac, int *maior)
{	
	if(carac >= 'A' && carac <= 'Z')
		carac = tolower(carac);
	if(carac >= 'a' && carac <= 'z')
	{
		v[carac-'a'] ++;
		if(v[carac-'a'] > (*maior))
			(*maior) = v[carac -'a'];
	}
}

int main () 
{
    int i, j, tam, quant, maior = 0, v[26];
    char carac;
    string linha;

    cin >> quant >> carac;
    memset(v, 0 , sizeof(v));
    frequencia(v, carac, &maior);
    for(i = 0; i < quant; i++)
    {
    	getline(cin, linha);
    	tam = linha.size();

    	for(j = 0; j < tam; j++)
    	{
    		frequencia(v, linha[j], &maior);
    	}
    	for(j = 0; j < 26; j++)
    	{
    		if(v[j] == maior)
    		{
    			carac = j + 97;
    			cout << carac;
    		}
       	}
    	cout << endl;
    	memset(v, 0 , sizeof(v));
    	maior = 0;
    }
    
    return 0;
}