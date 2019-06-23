#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int i, quant;
	bool flag = true;

	cin >> quant;

	int v[quant];

    for(i = 0; i < quant; i++)
    {
    	cin >> v[i];
	}

	if(quant > 2)
	{
		for(i = 1; i < quant-1; i++)
	    {
	    	if(v[i] >= v[i-1] && v[i+1] >= v[i])
	        {
	            flag = false;
	            break;
	        }else
	        {
	        	if(v[i] <= v[i-1] && v[i+1] <= v[i])
		        {
		            flag = false;
		            break;
		        }
		    }
		}	
	}
	else
	{
		if(v[0] == v[1])
			flag = false;
	}
	
	
	cout << flag << endl;

	return 0;
}