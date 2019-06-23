#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, quant, num, cont1, cont2, cont3;
	string curso;

	while(cin >> quant)
	{
		cont1 = 0, cont2 = 0, cont3 = 0;
		for(i = 0; i < quant; i++)
		{
			cin >> num >> curso;
			if(curso == "EPR") cont1++;
			else if(curso == "EHD") cont2++;
			else cont3++;
		}
		cout << "EPR: " << cont1 << endl;
		cout << "EHD: " << cont2 << endl;
		cout << "INTRUSOS: " << cont3 << endl;
	}
	return 0;
}