/*input
3
2 0 20
10 5
2 1 20
10 10
4 3 1
100 100 100 50
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
    int t, s, c, r;
    cin >> t;

    while(t--)
    {
        cin >> s >> c >> r;
        std::vector<double> velocidade(s);
        double soma = 0.0;

        f(0, s)
        {
            cin >> velocidade[i];
        }
        sort(velocidade.begin(), velocidade.end());
        f(0, c)
        {
            soma += (1.0 / (velocidade[i]+r));
        }
        f(c, s)
        {
            soma += (1.0 / velocidade[i]);
        }
        cout << fixed << setprecision(2) << soma << endl;
    }
    
    return 0;
}