#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int num;

	cin >> num;
	
	cout << fixed << setprecision(1) << num/log(num) << " ";
	cout << fixed << setprecision(1) << 1.25506*(num/log(num)) << endl;

	return 0;
}