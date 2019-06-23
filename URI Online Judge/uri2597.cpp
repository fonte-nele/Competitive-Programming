/*input
1
7
*/

// URI 2597 - Xenlongão
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

    int c, n;


    cin >> c;

    while(c--)
    {
        cin >> n;
        // Quadrados perfeitos tem a propriedade de quantidade ímpar de divisores!
        // Encontrar quantidade de números quadrados em um intervalo é (int)raiz quadrada de N.
        cout << n - (int)sqrt(n) << endl;
    }

    return 0;
}