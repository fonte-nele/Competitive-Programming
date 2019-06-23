#include <iostream>
using namespace std;

int main () 
{
    int i, quant, op, cont1, cont2;

    while(cin >> quant && quant != 0)
    {
    	cont1 = 0;
    	cont2 = 0;
    	for(i = 0; i < quant; i++)
    	{
    		cin >> op;
    		if(op)
    			cont1 ++;
    		else
    			cont2 ++;
    	}
    	
  		cout << "Mary won " << cont2 << " times and John won " << cont1 << " times" << endl;
    }

    return 0;
}