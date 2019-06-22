/*input
3 0
wanderley thadeu chegado
3 1
wanderley thadeu chegado
3 2
wanderley thadeu chegado
3 3
wanderley thadeu chegado
0 0
*/

// L - Gabarito
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
#define MAX 305
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, cnt = 1;

    while(cin >> n >> k && n+k){
        
        vector<string> v(n);
        map<string, int> ordem;
        map<string, int>::iterator it;
        f(0, n){
            cin >> v[i];
            ordem[v[i]] = i;
        }
        int aux = 0;

        while(!ordem.empty() && k > 0){
            for(it = ordem.begin();it != ordem.end() && k > 0; ++it) {

                if(it->second - aux <= k){
                    k -= (it->second - aux);

                    for(int i = it->second; i > aux; --i) {
                        v[i] = v[i - 1];
                        ordem[v[i - 1]]++;
                    }
                    v[aux] = it->first;
                    aux++;
                    ordem.erase(it->first);
                    break;
                }
            }
        }

        cout << "Instancia " << cnt << endl;
        cnt++;
        f(0, n){
            cout << v[i] << " ";
        }
        cout << endl << endl;
    }

    return 0;
}