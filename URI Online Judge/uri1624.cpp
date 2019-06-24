/*input
4
72 17
44 23
31 24
22 2
26
3
72 17
44 23
31 24
25
0
*/

// URI 1624 - Promoção
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

int mochila(int W, int wt[], int val[], int n){ 
    int i, w; 
    int K[n+1][W+1]; 
  
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i==0 || w==0) 
                K[i][w] = 0; 
            else if (wt[i-1] <= w) 
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
            else
                K[i][w] = K[i-1][w]; 
        }  
    } 
    return K[n][W]; 
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;

    while(cin >> n && n){
        int preco[n], peso[n];
        
        f(0, n){
            cin >> preco[i] >> peso[i];
        }
        cin >> m;

        cout << mochila(m, peso, preco, n) << endl;

    }

    return 0;
}