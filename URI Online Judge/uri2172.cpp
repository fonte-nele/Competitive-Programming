#include <iostream>
using namespace std;

int main()
{
	unsigned long long int num;
	int quant;
	
	while(cin >> quant >> num)
	{
		if(quant == 0 && num == 0)
		{
			break;
		}
		cout << quant*num << endl;
	}

	return 0;
}