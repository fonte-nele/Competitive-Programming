#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int tc, n, t, p, ans, foodright[N], foodmax[N];

int main () 
{
    int i;
    cin >> tc;
    while (tc--) 
    {
        memset(foodright, 0, sizeof(foodright));
        memset(foodmax, 0, sizeof(foodmax));

        ans = 0;

        cin >> n;
        while (n--) 
        {
            cin >> t >> p;
            if (p >= 10 and p <= 100) foodright[t] = max(foodright[t], p);
            foodmax[t] = max(foodmax[t], p);
        }
        for(i = 1; i <= 1000; i++) foodright[i] ? ans += foodright[i] : ans += foodmax[i];
        cout << ans << endl;
    }
    return 0;
}