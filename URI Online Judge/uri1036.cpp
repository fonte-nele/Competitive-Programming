#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, delta, r1, r2;
	
	cin >> a >> b >> c;
	delta = pow(b,2) - 4*a*c;

	if(delta >= 0 && a > 0)
	{
		r1 = ((-b) + sqrt(delta))/(2*a);
		r2 = ((-b) - sqrt(delta))/(2*a);
		cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
		cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
	}
	else
	{
		cout << "Impossivel calcular" << endl;
	}
	
	return 0;
}