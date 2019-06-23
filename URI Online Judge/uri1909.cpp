/*input
2 12
2 4
2 20
3 2
3 100
4 5 20
0 0
*/

// URI 1909 - Ajude Kiko
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

long long int n, t, v[101], mmc;

int checa(int x)
{
    for(int i=0; i<n; i++)
    {
        if(v[i]==x)
            return 0;
    }
    return 1;
}

long long int nova(){
    long long int i;
    for(i=2; i<=t; i++)
    {
        if(t%i == 0){
            if(((i*mmc)/__gcd(i,mmc)) == t){
                if(checa(i))    
                    return i;
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(cin >> n >> t && n && t)
    {
        mmc = 1;
        f(0, n){
            cin >> v[i];
            mmc = (mmc* v[i])/__gcd(mmc, v[i]);
            //mmc = __gcd(2, 4);
            //cout << mmc << endl;
        }
        //cout << "Antes = " << mmc << endl;
        mmc = nova();
        //cout << "Depois = " << mmc << endl;

        if(mmc>1)
            cout << mmc << endl;
        else
            cout << "impossivel" << endl;
    }

    return 0;
}