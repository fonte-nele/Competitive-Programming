#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
//#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int n;

double dist[17][17], memo[17][1 << 17];

double d(int x1, int y1, int x2, int y2)
{
    return hypot(x1 - x2, y1 - y2);
}

double solve(int id, int bitmask)
{
    //if(__builtin_popcount(bitmask) == n)
    if(bitmask == (1 << n) - 1)
        return dist[id][0];
    if(memo[id][bitmask] != -1)
        return memo[id][bitmask];

    double ans = INF;
    for(int i = 0; i < n; i++)
    {
        if(!(bitmask & (1 << i)))
            ans = min(ans, dist[id][i] + solve(i, bitmask | (1 << i)));
    }
    return memo[id][bitmask] = ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    while(cin >> n && n)
    {
        n++;
        int x[n], y[n];
        f(0, n)
        {
            cin >> x[i] >> y[i];
        }
        f(0, n)
        {
            fr(0, n)
            {
                dist[i][j] = dist[j][i] = d(x[i], y[i], x[j], y[j]);
            }
        }
        f(0, n)
        {
            fr(0, (1 << n))
                memo[i][j] = -1;
        }

        cout << fixed << setprecision(2) << solve(0, 1) << endl;
    }
    

    return 0;
}