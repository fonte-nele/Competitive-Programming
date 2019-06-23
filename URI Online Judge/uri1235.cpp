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

   		string inverso, inverso2;
   		tam = linha.size();
   		for(j = (tam/2)-1; j >= 0; j--)
   		{
   			inverso += linha[j];
   		}
   		for(j = tam-1; j >= (tam/2); j--)
   		{
   			inverso2 += linha[j];
   		}

   		cout << inverso << inverso2 << endl;
   	}

    return 0;
}