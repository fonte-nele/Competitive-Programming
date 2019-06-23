#include <iostream>
using namespace std;

int main()
{
	int quant, num1, num2, cont1 = 0, cont2 = 0;
	
	while(cin >> quant && quant > 0)
	{
		for(int i = 0; i < quant; i++)
		{
			cin >> num1 >> num2;
			if(num1 > num2)
			{
				cont1++;
			}
			else
			{
				if(num1 < num2)
				{
					cont2++;
				}
			}
		}
		cout << cont1 << " " << cont2 << endl;
		cont1 = 0;
		cont2 = 0;
	}

	return 0;
}