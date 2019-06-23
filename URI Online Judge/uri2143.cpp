#include <iostream>
using namespace std;

int main()
{
	int quant, num, total;
	
	while(cin >> quant && quant > 0)
	{
		for(int i = 0; i < quant; i++)
		{
			cin >> num;
			if(num % 2 == 0)
			{
				total = (num-2) * 2;
				total += 2;
			}
			else
			{
				total = (num - 1) * 2;
				total += 1;
			}
			cout << total << endl;
		}
	}
	return 0;
}