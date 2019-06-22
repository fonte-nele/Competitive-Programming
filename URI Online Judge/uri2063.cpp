/*input
6
2 1 5 3 6 4 
*/

// URI 2063 - Caçando Digletts
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    long long buraco[n];
    f(0, n){
        cin >> buraco[i];
    }

    int j;
    long long mmc, tam = 1;
    f(0, n){
        j = buraco[i]-1;
        while(buraco[i] != buraco[j]){
            j = buraco[j]-1;
            tam++;
        }
        //cout << "i = " << i << " tam = " << tam << endl;
        if(i == 0)
            mmc = tam;
        else
            mmc = ((tam * mmc)/__gcd(mmc, tam)); 

        tam = 1;
    }
    
    cout << mmc << endl;
    
    return 0;
}