#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

int main () 
{
	int i, quant_casas, quant_num, position = 1, movements = 0, order, last_position = 1, house;
	cin >> quant_casas >> quant_num;

	map<int, int> houses;

	for(i = 1; i <= quant_casas; i++) 
	{
		cin >> house;
		houses[house] = i;
	}

	for(i = 1; i <= quant_num; i++) 
	{
		cin >> order;

		position = houses[order];
		movements += abs(position - last_position);
		last_position = position;
	}

	cout << movements << endl;

	return 0;
}