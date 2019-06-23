/*input
2 1
5
7
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
    int n, m, valor;
    cin >> n >> m;
    vector<pair<int,int>> comp(n);

    f(0, n)
        comp[i].first = 0;
    //comp.assign(n, 0);
    f(0, n)
    {
        fr(0, m)
        {
            cin >> valor;
            comp[i].first += valor;
            comp[i].second = i;
        }
    }
    sort(comp.begin(), comp.end());
    f(0, 3)
    {
        cout << comp[i].second + 1 << endl;
    }
    //cout << comp[0].second +1 << endl;


    return 0;
}