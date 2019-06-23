#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, x, ans = (1 << 30);
    vector<int> v;

    cin >> n >> k;

    v.assign(k+1, 0);

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v[x]++;
    }

    for(int i = 1; i <=k; i++)
    {
        ans = min(ans, v[i]);
    }

    cout << ans << endl;

    return 0;
}