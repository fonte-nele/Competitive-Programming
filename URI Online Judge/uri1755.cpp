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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, d, n;
    string pal;

    cin >> t;
    while(t--)
    {
        cin >> d >> n;
        vector<double> v(n);
        double maior = 0.0, aux;
        f(0, n)
        {
            cin >> v[i];
        }

        f(0, n)
        {
            aux = v[i];
            if(v[i] <= d)
            {
                while(v[i] <= d)
                {
                    v[i] += aux;
                }
                v[i] -= aux;
                if((d - v[i]) > maior)
                {
                    maior = (d - v[i]);
                }
            }
            //cout << v[i] << endl;
        }

        cout << fixed << setprecision(2) << maior << endl;
    }
    return 0;
}