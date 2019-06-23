#include <iostream>
using namespace std;

int main()
{
    int i, j, aux, quant, consulta, valor;

    while(cin >> quant >> consulta)
    {
    	int nota[quant];
    	for(i = 0; i < quant; i++)
	    {
	    	cin >> nota[i];  	
	    }

	    //Ordenação Insertion
	    for(i = 1; i < quant ;i++)
		{
			aux = nota[i];
			j = i-1;
			
			while(j>=0 && aux > nota[j])
			{
				nota[j+1] = nota[j];
				j--;
			}
			nota[j+1] = aux;
		}
	    
	    for(i = 0; i < consulta; i++)
	    {
	    	cin >> valor;
	    	cout << nota[valor-1] << endl;
	    }
	    
    }
    
    return 0;
}