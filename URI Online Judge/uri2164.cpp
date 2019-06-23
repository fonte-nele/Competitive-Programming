#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int num;

	cin >> num;
		
	cout << fixed << setprecision(1) << (pow((1 + sqrt(5))/2,num) - pow((1 - sqrt(5))/2,num))/sqrt(5) << endl;

	return 0;
}