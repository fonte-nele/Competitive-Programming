#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quant, hora, min, ocor;

	cin >> quant;
	
	for(int i = 0; i < quant; i++)
	{
		cin >> hora >> min >> ocor;
		cout << setfill('0') << setw(2) << hora << ":" << setfill('0') << setw(2) << min << " - " ;
		if(ocor)
		{
			cout << "A porta abriu!" << endl;
		}
		else
		{
			cout << "A porta fechou!" << endl;
		}
	}

	return 0;
}