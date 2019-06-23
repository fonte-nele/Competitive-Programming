/*input
2
1 2 3
3
2 4 8
*/

// URI 2514 - Alinhamento Lunar
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

 int MDC(int a, int b) {        
    if (b==0) 
        return a;

    return MDC(b,a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l1, l2, l3, anos, mdc;

    while(cin >> anos >> l1 >> l2 >> l3)
    {
        mdc = (l1 * l2) / __gcd(l1, l2); // Propriedade MDC = (a*b) / mmc(a, b)
        mdc = (mdc * l3) / __gcd(mdc, l3);
        cout <<  mdc - anos << endl;  
    }

    return 0;
}