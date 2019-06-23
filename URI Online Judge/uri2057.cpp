#include <iostream>
using namespace std;

int main () 
{
	int hora1, tempo, fuso, total, certo;
	cin >> hora1 >> tempo >> fuso;
	total = hora1 + tempo + fuso;
	
	if(total > 23)
	{
		certo = total - 24;
	}
	else
	{
		if(total < 0)
		{
			certo = 24 + total;
		}
		else
		{
			certo = total;
		}
	}
	cout << certo << endl;
	return 0;
}