#include <bits/stdc++.h>
using namespace std;

const double pi = 3.141592654;

int main() 
{
    double a, b, c;
    cout << fixed << setprecision(2);
    while (cin >> a >> b >> c) 
    {
        double x = tan(a * pi / 180.0) * b + c;
        cout << x * 5.0 << endl;
    }
    return 0;
}