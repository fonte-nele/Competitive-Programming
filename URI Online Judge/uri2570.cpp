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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

int val[500010], mat[1010][1010], l[1010], c[1010];
char op[500010];

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    f(0, k)
        cin >> op[i] >> val[i];

    mem(l, 0);
    mem(c, 0);
    mem(mat, -1);
    int turn = (k - 1) % 4;
    
    for(int i = k -1; i >= 0; i--)
    {
        if(op[i] == 'C' && c[val[i] - 1] < n)
        {
            fr(0, n)
            {
                if (mat[j][val[i] - 1] == -1)
                {
                    mat[j][val[i] - 1] = turn;
                    c[val[i] - 1]++;
                    l[j]++;
                }
            }
        }
        else if (op[i] == 'L' && l[val[i] - 1] < m)
        {
            fr(0, m)
            {
                if (mat[val[i] - 1][j] == -1)
                {
                    mat[val[i] - 1][j] = turn;
                    l[val[i] - 1]++;
                    c[j]++;
                }
            }
        }
        turn = (turn + 3) % 4;
    }
    int ans[4];
    mem(ans, 0);
    f(0, n)
        fr(0, m)
            if (mat[i][j] != -1)
                ans[mat[i][j]]++;

    cout << "R" << ans[0] << " H" << ans[1] << " C" << ans[2] << " P" << ans[3] << endl;

    return 0;
}