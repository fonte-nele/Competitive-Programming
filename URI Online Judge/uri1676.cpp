/*input
2
50 3
15 50 24.35
50 4
15 16.50 50 22.40
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

const int N = 100005;
vi p;
int cmp[N];

/*void primos()
{
    for (ll i = 2; i <= N; ++i) if (!cmp[i]) {
        int buf = 0;
        for (ll j = i+1; j <= N; j++) {
            if (!cmp[j]) buf++;
            if (buf == i) cmp[j] = 1, buf = 0;
        }
        p.pb(i);
    }
}*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    //primos();

    for (ll i = 2; i <= N; ++i) if (!cmp[i]) {
        int buf = 0;
        for (ll j = i+1; j <= N; j++) {
            if (!cmp[j]) buf++;
            if (buf == i) cmp[j] = 1, buf = 0;
        }
        p.pb(i);
    }
    // for(int i=0; i < 3001; i++)
    // {
    //     cout << i+1 << " -> " << p[i] << endl;
    // }

    while(cin >> n && n)
    {
        if(n==0)
            break;
        cout << p[n-1] << endl;
    }
    return 0;
}