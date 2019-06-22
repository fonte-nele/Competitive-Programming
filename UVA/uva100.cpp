/*input
1
*/

// Contest Div2 21/06 - Problem A
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

int cache[1000000];

long calcular(long n){
    if(n % 2 == 0)
        return n/2; 
    else
        return 3*n + 1;
}

long cicloMaximo(long n){
    if(n == 1)
        return 1;

    if(n < 1000000 && cache[n] != 0){
        return cache[n];
    }

    int tam = 1 + cicloMaximo(calcular(n));

    if(n < 1000000)
        cache[n] = tam;

    return tam;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j;

    while(cin >> i >> j){
        int beg = min(i, j);
        int maior = max(i, j);
        int valor = 0;

        for(int n = beg; n <= maior; n++){
            valor = max(valor, (int)cicloMaximo(n));
        }
        cout << i << " " << j << " " << valor << endl;
    }

    return 0;
}