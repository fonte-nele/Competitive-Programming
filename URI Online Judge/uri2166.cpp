#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double num, ans = 0.0;

	cin >> num;

    while(num--)
    {
        ans += 2.0;
        ans = 1.0 / ans;
    }
    ans += 1.0;
		
	cout << fixed << setprecision(10) << ans << endl;

	return 0;
}