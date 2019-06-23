#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	
	while(cin >> num1 >> num2 >> num3)
	{
		switch(num1)
		{
			case 0:
			{
				if(num2 == 0)
				{
					if(num3)
						cout << "C" << endl;
					else
						cout << "*" << endl;
				}
				else
				{
					if(num3)
						cout << "A" << endl;
					else
						cout << "B" << endl;
				}
				break;
			}
			case 1:
			{
				if(num2)
				{
					if(num3)
						cout << "*" << endl;
					else
						cout << "C" << endl;
				}
				else
				{
					if(num3)
						cout << "B" << endl;
					else
						cout << "A" << endl;
				}
				break;
			}
		}
	}

	return 0;
}