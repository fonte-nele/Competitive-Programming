#include <bits/stdc++.h>
using namespace std;

int calls, soma;

int fib(int num)
{
	if(num == 0)
	{
		calls++;
		return 0;
	}
	else if(num == 1)
	{
		calls++;
		soma++;
		return 1;
	}
	else
	{
		calls++;
		return fib(num-1) + fib(num-2);
	}
}

int main () 
{
	int i, quant, num;

	cin >> quant;
    for(i = 0; i < quant; i++) 
    {
    	calls = 0, soma = 0;
    	cin >> num;
    	unsigned long long int valor = fib(num);

    	cout << "fib(" << num << ") = " << calls-1 << " calls = " << soma << endl;
    }
    return 0;
}