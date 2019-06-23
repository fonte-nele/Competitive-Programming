#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2;
    double d1, d2, v1, v2, r1, r2;

    cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;

    r1 = d1/v1;
    r2 = d2/v2;

    if(r1 < r2)
        cout << n1 << endl;
    else
        cout << n2 << endl;

    return 0;
}