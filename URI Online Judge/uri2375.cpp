#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, l, p;

    cin >> n >> a >> l >> p;

    if (a >= n && l >= n && p >= n)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
