/*input
6 20
24 23 15 22 24 17
1 100
100
10 1000000
99 99 99 99 99 99 99 99 99 99
-1 -1
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
    long long int peso, soma, ant;
    int n, m;

    while(cin >> n >> m && n != -1 && m != -1)
    {
        soma = 0;
        ant = 0;
        f(0, n){
            cin >> peso;
            ant += peso;
            soma += ant; 
        }

        cout << soma * m << endl;
    }
    
    return 0;
}