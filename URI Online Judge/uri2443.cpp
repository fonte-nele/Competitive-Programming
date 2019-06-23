#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int nu = d * a + c * b;
    int de = b * d;

    cout << nu / __gcd(nu, de) << " " << de / __gcd(nu, de) << endl;

    return 0;
}