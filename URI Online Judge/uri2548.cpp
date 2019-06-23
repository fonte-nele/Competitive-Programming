#include <iostream>
using namespace std;

int main() 
{
    int i, k, j, quant, num, soma, aux;

    while(cin >> quant >> num)
    {
	    int v[quant];
	    soma = 0;
		for(k = 0; k < quant; k++)
		{
			cin >> v[k];
		}
		
		//Ordenação Insertion
	    for(i = 1; i < quant ;i++)
		{
			aux = v[i];
			j = i-1;
			
			while(j>=0 && aux < v[j])
			{
				v[j+1] = v[j];
				j--;
			}
			v[j+1] = aux;
		}

		for(i = quant-num; i < quant; i++)
		{

			soma += v[i];
		}
		cout << soma << endl;
    }
    return 0;
}