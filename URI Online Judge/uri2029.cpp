#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () 
{
	float volume, diam, raio, altura, area;
	while(cin >> volume >> diam)
	{
		raio = diam/2;
		area = 3.14 * pow(raio,2);
		altura = volume / (3.14 * pow(raio,2));

		cout << "ALTURA = " << fixed << setprecision(2) << altura << endl;
		cout << "AREA = " << fixed << setprecision(2) << area << endl;
	}
	return 0;
}