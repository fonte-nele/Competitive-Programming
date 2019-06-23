#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double x, y, dist, xf, yf, xi, yi, vi, raio1, raio2;
	
	while(cin >> xf >> yf >> xi >> yi >> vi >> raio1 >> raio2)
	{
		x = (xi - xf) * (xi - xf);
		y = (yi - yf) * (yi - yf);
		dist = sqrt(x+y);

		dist += vi * 1.5;

		if(dist > (raio1 + raio2))
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}

	return 0;
}