#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tc; cin >> tc;
    while (tc--) 
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long rate = c - a;
        int neg = 0;
        if ((d - b) * (c - a) < 0) 
        {
            neg = 1;
        }
        double ans = double(d - b) / double(c - a);
        if (neg) ans *= -1;
        long long t = (ans * 100LL);
        if (neg) cout << '-';
        cout << t / 100 << ',' << setw(2) << setfill('0') << t % 100 << endl;
    }
    return 0;
}