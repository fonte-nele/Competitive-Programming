#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j = 1, quant, n1, n2;
	string jog1, jog2;

	while(cin >> quant && quant != 0)
	{
		cin >> jog1 >> jog2;

		cout << "Teste " << j << endl;
		j++;
		for(i = 0; i < quant; i++)
		{
			cin >> n1 >> n2;
			if((n1 + n2) % 2 == 0)
			{
				cout << jog1 << endl;
			}
			else
			{
				cout << jog2 << endl;
			}
		}
		cout << endl;
	}
	return 0;
}