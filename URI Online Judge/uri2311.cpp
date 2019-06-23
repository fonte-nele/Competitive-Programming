#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, quant;
    float grau, v[7], maior, menor, soma = 0;
    string nome;

    cin >> quant;
    
    for(i = 0; i < quant; i++)
    {
    	cin >> nome;
    	cin >> grau;
    	
    	cin >> v[0];
    	menor = v[0];
    	maior = v[0];
    	soma += v[0];
    	for(j = 1; j < 7; j++)
    	{
    		cin >> v[j];
    		soma += v[j];

    		if(menor > v[j])
    		{
    			menor = v[j];
    		}
    		if(maior < v[j])
    		{
    			maior = v[j];
    		}
    	}
    	soma -= menor;
    	soma -= maior;

    	soma *= grau;
    	cout << nome << " " << fixed << setprecision(2) << soma << endl;
    	soma = 0;
    }
    
    return 0;
}