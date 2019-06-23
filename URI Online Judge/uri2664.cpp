#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
typedef long long int ll;
using namespace std;

int dp[55][100005];
int t, n, m;

int solve (int i, int j)
{
    if (j < m or j > n)
        return 0;
    if (i == 1 and m <= j and j <= n)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = (solve (i - 1, j - 1) + solve (i - 1, j + 1)) % ((int) 1e9 + 7);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> t >> m >> n)
    {
        ll ans = 0;
        memset (dp, -1, sizeof dp);
        for (int i = m; i <= n; i++)
            ans += (solve (t, i) % ((int) 1e9 + 7));
            ans %= ((int) 1e9 + 7);
        cout << ans << endl;
    }
    return 0;
}