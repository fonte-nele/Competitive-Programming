#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int i, j, quant, num, pos, tam, operacao;

	cin >> quant;

	for(i = 0; i < quant; i++)
	{
		pos = 0;
		cin >> num;
		string op[num];

		getline(cin, op[0]);
		for(j = 0; j < num; j++)
		{
			getline(cin, op[j]);
			
			if(op[j] == "LEFT")
			{
				pos--;
			}
			else if(op[j] == "RIGHT")
			{
				pos++;
			}
			else
			{
				tam = op[j].size();
				op[j] = op[j].substr(8, tam-8);
				operacao = atoi(op[j].c_str());
				if(op[operacao-1] == "LEFT")
				{
					op[j] = "LEFT";
					pos--;
				}
				else if(op[operacao-1] == "RIGHT")
				{
					op[j] = "RIGHT";
					pos++;
				}
			}
		}
		cout << pos << endl;
	}



	return 0;
}