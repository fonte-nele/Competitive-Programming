#include <iostream>
#include <iomanip>
using namespace std;

int main () 
{
	double num;
	cin >> num;

	cout << scientific << setprecision(4) << showpos << uppercase << num << endl;
	return 0;
}