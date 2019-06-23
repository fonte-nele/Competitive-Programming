#include <iostream>
using namespace std;

void bolha(int *v,int n,int *mov)
{
	int i, j, troca, aux;
	for(i = 0;i < n-1; i++)
	{
		troca=0;
		for(j = 1; j < n-i; j++)
		{
			if(v[j] < v[j-1])
			{
				aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;
				troca++;
				(*mov)++;
			}
		}
		if(troca==0)
		{
			break;
		}
	}
}

int main () 
{
    int i, j, k, quant, quant2, cont;
    cin >> quant;
    
    for(i = 0; i < quant; i++) 
    {
    	cin >> quant2;
    	int v[quant2];
    	cont = 0;
    	
    	for(j = 0; j < quant2; j++)
    	{
    		cin >> v[j];
    	}
    	bolha(v, quant2, &cont);

        cout << "Optimal train swapping takes " << cont << " swaps." << endl;
    }
    return 0;
}