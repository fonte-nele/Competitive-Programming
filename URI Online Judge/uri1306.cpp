/*input
8 5
100 2
0 0
*/

// URI 1306 - Numerando Estradas
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

    int cont = 1, res;
    double r, n;

    while(cin >> r >> n && n && r)
    {
        bool flag = false;

        if(r <= n)
            res = 0;
        else{
            res = ceil(r / n) - 1;

            if(res > 26)
                flag = true;
        }
        if(flag){
            cout << "Case " << cont << ": impossible" << endl;
        }
        else{
            cout << "Case " << cont << ": " << res << endl;
        }
        cont++;  
    }

    return 0;
}