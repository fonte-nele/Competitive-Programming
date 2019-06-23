/*input
5 2
3 2
4 4
*/
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
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int x, y, l1, h1, l2, h2;
    //cin >> x >> y;
    //cin >> l1 >> h1 >> l2 >> h2;
    int n, m, pos, pos1, pulo;
    cin >> n >> m;

    vector<int> v(n+1);
    v.assign(n+1, 0);
    f(0, m)
    {
        cin >> pos >> pulo;
        v[pos] = 1;

        pos1 = pos;
        while(pos > 1)
        {
            pos -= pulo;
            if(pos <= 0)
                break;
            v[pos] = 1;
        }
        pos = pos1;
        while(pos < n+1)
        {
            pos += pulo;
            if(pos > n)
                break;
            v[pos] = 1;
        }
    }
    f(1, n+1)
    {
        cout << v[i] << endl;
    }

    return 0;
}