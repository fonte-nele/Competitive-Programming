#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () 
{
    int i, j, k, quant, quant2, quant3;
    cin >> quant;
    
    for(i = 0; i < quant; i++) 
    {
    	cin >> quant2;
    	int num;
    	string prod[quant2], compra;
    	float preco[quant2], soma = 0.00;
        for(j = 0; j < quant2; j++)
        {
        	cin >> prod[j] >> preco[j];
        }

        cin >> quant3;
        for(j = 0; j < quant3; j++)
        {
        	cin >> compra >> num;
        	for(k = 0; k < quant2; k++)
        	{
        		if(prod[k] == compra)
        		{
        			soma += (preco[k] * num);
        		}
        	}
        }
        cout << "R$ " << fixed << setprecision(2) << soma << endl;
    }
    return 0;
}