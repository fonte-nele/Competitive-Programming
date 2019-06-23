/*input
6
20
18
35
6
80
15
21
4
40
30
20
10
38
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

int maxSubArraySum(vector<int> &v, int n, int custo)  // Algoritmo de Kadane
{ 
    int max = INT_MIN, max_rodada = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        max_rodada = max_rodada + v[i] - custo; 
        if (max < max_rodada) 
            max = max_rodada; 
  
        if (max_rodada < 0) 
            max_rodada = 0; 
    }
    if(max < 0)
        max = 0;
    return max; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, custo;

    while(cin >> n >> custo) 
    {
        int lucro = 0;
        vector<int> v(n);
        f(0, n)
        {
            cin >> v[i];
        }
        lucro = maxSubArraySum(v, n, custo);

        cout << lucro << endl;
    }
    return 0;
}