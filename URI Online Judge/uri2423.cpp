#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, ra, rb, rc;

    cin >> a >> b >> c;

    ra = a / 2;
    rb = b / 3;
    rc = c / 5;

    cout << min(min(ra,rb),rc) << endl;

    return 0;
}