#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
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

char mapa[1030][1030];
int n, m;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool inGrid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return mapa[i][j] == '.';
}

void dfs(int i, int j)
{
    mapa[i][j] = 'o';

    for(int x = 0; x < 4; x++)
    {
        if(inGrid(i + dx[x], j + dy[x]))
            dfs(i + dx[x], j + dy[x]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    f(0, n)
    {
        cin >> mapa[i];
    }

    int ans = 0;

    f(0, n)
    {
        fr(0, m)
        {
            if(mapa[i][j] == '.')
            {
                ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans << endl;

    return 0;
}