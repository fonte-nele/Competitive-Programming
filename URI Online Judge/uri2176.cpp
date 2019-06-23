#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string bits;
	cin >> bits;

	int i, cont = 0, tam = bits.size();
	for(i = 0; i < tam; i++)
	{
		if(bits[i] == '1')
			cont++;
	}
	if(cont % 2 == 0)
		cout << bits << 0 << endl;
	else
		cout << bits << 1 << endl;

	return 0;
}