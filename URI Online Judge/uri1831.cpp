/*input
Teorema Chinês dos Restos
2 5
3 7
0 9
0 10
0 17
0 23
1 3
1 4
1 5
4 5
6 7
8 9
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
#define INF 0x3f3f3f3f3f3f3f3fLL
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

long long gcd(long long a, long long b, long long& x, long long& y){

    long long x1, y1, d;

    if( !b ){
        x = 1;
        y = 0;
        return a;
    }

    d = gcd(b, a%b, x1, y1);

    x = y1;
    y = x1 - (a/b)*y1;

    return d;
}

void fixModInv(long long& inv, long long mod){
    while( inv < 0 )
        inv += mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, mod1, c, mod2, e, mod3, ans, modx, inv1, inv2, inv3, invx, f, temp;
    long long cont = 1;

    while(cin >> a >> mod1 >> c >> mod2 >> e >> mod3)
    {
        gcd(mod2, mod1 % mod2, temp, inv1);
        gcd(mod1, mod2 % mod1, temp, inv2);

        fixModInv(inv1, mod2);
        fixModInv(inv2, mod1);

        modx = mod1 * mod2;
        f = (c*inv1*mod1 + a*inv2*mod2) % modx;

        gcd(mod3, modx % mod3, temp, invx);
        gcd(modx, mod3 % modx, temp, inv3);

        fixModInv(invx, mod3);
        fixModInv(inv3, modx);
        
        ans = (e*invx*modx + f*inv3*mod3) % (modx*mod3);

        if(!ans)
            ans = mod1 * mod2 * mod3;

        cout << "Caso #" << cont << ": " << ans << " laranja(s)" << endl;
        cont++;
    }

    return 0;
}