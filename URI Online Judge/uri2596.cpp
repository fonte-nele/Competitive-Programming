#include <iostream>
using namespace std;

int main () 
{
    int i, j, k, quant, num, div, sub;
    
    cin >> quant;

   	for(i = 0; i < quant; i++)
   	{
   		cin >> num;
   		sub = 0;
   		for(j = 1; j <= num; j++)
   		{
   			div = 0;
   			for(k = 1; k <= j; k++)
   			{
   				if(j % k == 0)
   				{
   					div++;
   				}
   			}
   			if(div % 2 != 0)
   			{
   				sub++;
   			}
   		}
   		cout << num - sub << endl;
   	}
    return 0;
}