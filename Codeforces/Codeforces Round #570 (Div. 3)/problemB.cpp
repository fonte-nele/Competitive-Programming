/*input
432
*/

// Problem A - Nearest Interesting Number
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
#define endl "\n"
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

long soma(int a){
    long s = 0;

    while(a > 9){
        s += a % 10;
        a /= 10;
    }
    s += a;
    return s;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;

    cin >> t;    
    while(t--){
        cin >> n >> k;
        int v[n];

        f(0, n){
            cin >> v[i];
        }
        int menor = *min_element(v, v+n);
        int maior = *max_element(v, v+n);

        //cout << menor + k << endl;
        int flag = 0;
        while(k > 0){
            if(menor + k >= maior - k){
                cout << menor + k << endl;
                flag = 1;
                break;
            }
            k--;
        }
        if(!flag)
            cout << -1 << endl;
    }

    return 0;
}