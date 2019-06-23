#include <iostream>
using namespace std;

int main () 
{
	int i, num, v[4], valor;
	cin >> num;

	for(i = 0; i < 4; i++)
	{
		v[i] = 0;
	}

	for(i = 0; i < num; i++)
	{
		cin >> valor;
		if(valor % 2 == 0)
		{
			v[0] += 1;
		}
		if(valor % 3 == 0)
		{
			v[1] += 1;
		}
		if(valor % 4 == 0)
		{
			v[2] += 1;
		}
		if(valor % 5 == 0)
		{
			v[3] += 1;
		}

	}
	cout << v[0] << " Multiplo(s) de 2" << endl;
	cout << v[1] << " Multiplo(s) de 3" << endl;
	cout << v[2] << " Multiplo(s) de 4" << endl;
	cout << v[3] << " Multiplo(s) de 5" << endl;

	return 0;
}