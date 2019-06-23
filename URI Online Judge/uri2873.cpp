/*input
4 3 2 3
10 5 2 6
8 4 5 10
20 5 6 12
0 0 0 0
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double a, b, c, d;

    while(cin >> a >> b >> c >> d)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;

        double x = ((a/2 + b) * c) / d;

        cout << fixed << setprecision(5) << x << endl;

    }

    return 0;
}