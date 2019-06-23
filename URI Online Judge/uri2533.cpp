#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, quant, soma1 = 0, soma2 = 0, nota, carga;

    while(cin >> quant)
    {
    	for(i = 0; i < quant; i++)
	    {
	    	cin >> nota >> carga;
	    	
	    	soma1 += (nota * carga);
	    	soma2 += carga;
	    	
	    }
	    soma2 *= 100;
		cout << fixed << setprecision(4) << (double)soma1/soma2 << endl;

		soma1 = 0;
		soma2 = 0;
    }
    
    return 0;
}