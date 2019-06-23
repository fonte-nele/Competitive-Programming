#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, quant1, quant2, cont = 0, op;
    string data, dataCerta = "0";

    while(cin >> quant2 >> quant1)
    {
    	for(i = 0; i < quant1; i++)
    	{
    		cin >> data;

    		for(j = 0; j < quant2; j++)
    		{
    			cin >> op;
    			if(op && dataCerta == "0")
    			{
    				cont ++;
    			}
    		}
	    	if(cont == quant2)
	    	{
	    		dataCerta = data;
	    	}
	    	cont = 0;
    	}
    	if(dataCerta == "0")
    		cout << "Pizza antes de FdI" << endl;
    	else
    		cout << dataCerta << endl;
    	dataCerta = "0";
    }
    
    return 0;
}