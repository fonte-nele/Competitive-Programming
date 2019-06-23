#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    int quant, s;
    cin >> quant;

    for(int i = 0; i < quant; i++)
    {
        cin >> n;

        // formula: n = s (s - 1) / 2
        // logo: s²+s = 2 * n

        s = (-1 + (sqrt (1 + 8 * n))) / 2;

        cout << s << endl;
    }

    return 0;
}