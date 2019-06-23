#include <iostream>
using namespace std;

int main()
{
    int quant, cont = 0;

    while(cin >> quant)
    {
    	while(quant != 1)
    	{
    		quant /= 2;
    		cont++;
    	}
    	cout << cont << endl;
    	cont = 0;
    }
    
    return 0;
}