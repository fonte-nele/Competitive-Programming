#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, g, ra, rg, vala, valg;

    cin >> a >> g >> ra >> rg;

    vala = ra / a;
    valg = rg / g;

    if(vala > valg)
        cout << "A" << endl;
    else
        cout << "G" << endl;

    return 0;
}