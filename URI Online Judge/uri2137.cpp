#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant;

    while(cin >> quant) 
    {
    	string linha[quant];
    	for(i = 0; i < quant; i++)
    	{
    		cin >> linha[i];
    	}

    	string aux;
		for(i = 1; i < quant;i++)
		{
			aux = linha[i];
			j = i-1;

			while(j>=0 && aux < linha[j])
			{
				linha[j+1] = linha[j];
				j--;
			}
			linha[j+1] = aux;
		}

		for(i = 0; i < quant; i++)
		{
			cout << linha[i] << endl;	
		}
    }
    return 0;
}
