#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, cont = 0, maior = 0;
    long long num;
    
    cin >> quant;
    
    for(int i = 0; i < quant; i++)
    {
    	maior = 0, cont = 0;
    	cin >> num;

    	while(num > 0)
    	{
    		if(num & 1)
    			cont++;
    		else
    		{
    			maior = max(maior, cont);
    			cont = 0;
    		}

    		num /= 2;
    	}
    	cout << max(maior, cont) << endl;
    }
    
    return 0;
}