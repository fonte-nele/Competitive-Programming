#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float num1, num2;
	cin >> num1 >> num2;

	cout << fixed << setprecision(2) << num1/num2 << endl;

	return 0;
}