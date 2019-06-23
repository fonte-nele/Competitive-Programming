#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{
    int i, quant, maior, pos = 0;

    while(cin >> quant && quant != 0)
    {
    	if(pos != 0)
    	{
    		cout << endl;
    	}
    	string linha[quant];
    	int tam[quant];
    	for(i = 0; i < quant; i++)
	   	{
	   		cin >> linha[i];
	   		tam[i] = linha[i].size();
	   	}
	   	maior = 0;
	   	for(i = 0; i < quant; i++)
	   	{
	   		if(maior < tam[i])
	   		{
	   			maior = tam[i];
	   		}
	   	}
	   	for(i = 0; i < quant; i++)
	   	{
	   		cout << setfill(' ') << setw(maior) << linha[i] << endl;
	   	}
	   	pos++;
    }
   	
    return 0;
}