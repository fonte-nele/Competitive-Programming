/*input
10 5
1 15 5 998 27
1
88
15
88
99
5
100
7
27
998
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
    int q, e, num;
    cin >> q >> e;
    vector<int> visitados;
    vector<int> ::iterator it;

    f(0, e)
    {
        cin >> num;
        visitados.push_back(num);
    }
    f(0, q)
    {
        cin >> num;
        it = find(visitados.begin(), visitados.end(), num);
        if(it != visitados.end())
            cout << 0 << endl;
        else{
            cout << 1 << endl;
            visitados.push_back(num);
        }
    }
    
    return 0;
}