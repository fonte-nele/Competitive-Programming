#include <iostream>
using namespace std;

int main() 
{
    long long int i, j, quant, num, aux, tam, soma;

    cin >> quant;
   	for(i = 0; i < quant; i++)
    {
	    soma = 1;
	    cin >> tam >> num;

	    aux = num;
		while(num < tam)
		{
			num += aux;
			soma++;
		}
		
		cout << soma << endl;
    }
    return 0;
}