#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, c, r1, r2, r, a, b;

    while((cin >> l >> c >> r1 >> r2) && (l + c + r1 + r2))
    {
        if(min (l, c) < 2 * max (r1, r2))
            cout << "N" << endl;
        else
        {
            r = r1 + r2;
            a = l - r;
            b = c - r;

            if ((a*a) + (b*b) < (r*r))
                cout << "N" << endl;
            else
                cout << "S" << endl;
        }
    }
    return 0;
}