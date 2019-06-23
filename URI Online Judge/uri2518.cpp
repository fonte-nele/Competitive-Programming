#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    int quant, h, c, l;
    double base, area;

	while(cin >> quant)
	{
		cin >> h >> c >> l;

		base = sqrt(pow(h,2) + pow(c,2));
		base *= quant;
		base /= 100;

		area = base * ((double)l/100);

		cout << fixed << setprecision(4) << area << endl;
	}

    return 0;
}