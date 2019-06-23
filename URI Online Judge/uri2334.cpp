#include <iostream>
using namespace std;

int main()
{
	unsigned long long int quant;
	
	while(cin >> quant && quant != -1)
	{

		if(quant == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << quant -1 << endl;
		}
	}

	return 0;
}