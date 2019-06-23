#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, quant, cont, pos;
	string linha, time1, time2;

	cin >> quant;

	getline(cin, linha);
	for(i = 0; i < quant; i++)
	{
		getline(cin, linha);
		cont = 0;
		pos = 0;

		while(pos != -1)
		{
			pos = linha.find('.', pos);

			if(pos == -1)
			{
				break;
			}

			linha.erase(pos, 1);
		}
		pos = 0;
		while(pos != -1)
		{
			pos = linha.find("<>", 0);

			if(pos == -1)
			{
				break;
			}
			linha.erase(pos, 2);
			cont++;
		}
		cout << cont << endl;
	}
	return 0;
}