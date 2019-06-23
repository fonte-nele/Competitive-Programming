/*input
2 12 8 2
*/

// URI 2238 - Divisores
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
#define pi 3.1415926535897
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c, d, res = -1;


    cin >> a >> b >> c >> d;

    set<ll> divisores;
    set<ll> :: iterator it;
    for (ll i = 1; i <= sqrt(c); i++)
    {
        if(c%i == 0){
            divisores.insert(i);
            divisores.insert(c/i);
        }
    }
    //sort(divisores.begin(), divisores.end());
    for (it = divisores.begin(); it != divisores.end(); it++)
    {
        if(*it % a ==0 && *it % b != 0 && c%*it == 0 && d%*it != 0){
            res = *it;
            break;
        }
    }
    /*for (int i = 0; i < (int)divisores.size(); i++)
    {
        if(divisores[i] % a ==0 && divisores[i] % b != 0 && c%divisores[i] == 0 && d%divisores[i] != 0){
            res = divisores[i];
            break;
        }
    }*/
    cout << res << endl;

    return 0;
}