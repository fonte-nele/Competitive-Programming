#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, p, f;

    cin >> c >> p >> f;

    if (c*f <= p)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
