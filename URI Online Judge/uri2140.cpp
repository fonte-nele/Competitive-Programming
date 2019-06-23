#include <iostream>
using namespace std;

int main () 
{
	int n, m, troco, cont=0;

	while(cin >> n >> m)
	{
		if(n==0 && m==0)
		{
			break;
		}
		troco = m-n;
		while(troco >= 100)
		{
			cont++;
			troco -= 100;
		}
		while(troco >= 50)
		{
			cont++;
			troco -= 50;
		}
		while(troco >= 20)
		{
			cont++;
			troco -= 20;
		}
		while(troco >= 10)
		{
			cont++;
			troco -= 10;
		}
		while(troco >= 5)
		{
			cont++;
			troco -= 5;
		}
		while(troco >= 2)
		{
			cont++;
			troco -= 2;
		}
		if(troco == 0 && cont == 2)
		{
			cout << "possible" << endl;
		}
		else
		{
			cout << "impossible" << endl;
		}
		cont = 0;
	}
	

	return 0;
}