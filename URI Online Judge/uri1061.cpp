#include <iostream>
#include <string>
using namespace std;

int main () 
{
	int dia1, dia2, hora1, hora2, min1, min2, seg1, seg2, total1, total2, total, cont1=0, cont2=0;
	string nome;
	cin >> nome >> dia1 >> hora1 >> nome >> min1 >> nome >> seg1 >> nome >> dia2 >> hora2 >> nome >> min2 >> nome >> seg2;

	total1 = hora1*3600 + min1*60 + seg1;
	total2 = hora2*3600 + min2*60 + seg2;
	if(hora2 < hora1)
	{
		cout << dia2-dia1-1 << " dia(s)" << endl;
		total2 += ((dia2-dia1-1)*86400);
		total = total2 - total1;
	}
	else
	{
		cout << dia2-dia1 << " dia(s)" << endl;
		total2 += ((dia2-dia1)*86400);
		total = total2 - total1;
	}
	while(total >= 86400)
	{
		total -= 86400;
	}
	while(total >= 3600)
	{
		total -= 3600;
		cont1 ++;
	}
	while(total >= 60)
	{
		total -= 60;
		cont2 ++;
	}
	cout << cont1 << " hora(s)" << endl;
	cout << cont2 << " minuto(s)" << endl;
	cout << total << " segundo(s)" << endl;
	return 0;
}