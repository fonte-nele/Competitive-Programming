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
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int n, especial[2010];
ii memo[2010][2010];
st s;

ii operator + (const ii a, const ii b)
{
    return ii(a.fi + b.fi, a.se + b.se);
}

ii max(ii a, ii b)
{
    if(a.fi != b.fi)
    {
        return a.fi > b.fi ? a : b;
    }
    return a.se > b.se ? a : b;
}

ii solve(int l, int r)
{
    if(l == r)
        return memo[l][r] = ii(especial[l], 1);
    if(l+1 == r)
        return memo[l][r] = s[l] == s[r] ? ii(especial[l] + especial[r], 2) : ii(especial[l] || especial[r] ,1);
    if(memo[l][r] != ii(-1, -1))
        return memo[l][r];
    if(s[l] == s[r])
        return memo[l][r] = max(ii(especial[l] + especial[r], 2) + solve(l+1, r-1) ,max(solve(l+1, r), solve(l, r-1)));
    return memo[l][r] = max(solve(l+1, r), solve(l, r-1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //cin >> n;
    cin >> s;

    int k, x;
    mem(especial, 0);
    cin >> k;

    f(0, k)
    {
        cin >> x;
        especial[--x] = 1;
    }

    int sz = s.size();
    f(0, sz)
    {
        fr(0, sz)
        {
            memo[i][j] = ii(-1, -1);
        }
    }


    cout << solve(0, sz-1).second << endl;

    return 0;
}