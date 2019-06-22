/*input
0 1 1 0 1 1 1 
1 0 1 1 0 1 1 
1 1 1 0 0 1 1 
0 1 0 1 0 1 0 
1 0 0 0 0 1 1 
1 1 1 1 1 1 0 
1 1 1 0 1 0 1
*/

// L - Dominó
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

    vector<int> res(7, 0);
    int valor;

    f(0, 7){
        fr(0, 7){
            cin >> valor;
            if(valor == 1){
                res[i]++;
            }
        }
    }

    f(0, 7){
        cout << res[i] << endl;
    }

    return 0;
}