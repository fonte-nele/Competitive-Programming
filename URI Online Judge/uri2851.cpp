/*input
6 3
2 1 3
3 1 2 3
2 1 3
2 1 2
2 2 3
1 2
3 1 2 3
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
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> v(n);
    vector<vector<int> > ocorrencias(n);
    ocorrencias.assign(101, vector<int> ());
    f(0, n)
    {
        cin >> v[i];
        ocorrencias[v[i]].push_back(i);
    }
    f(0, n)
    {
        int menor = n+1, melhor = -1;
        fr(v[i]+1, 101)
        {
            auto it = upper_bound(ocorrencias[j].begin(), ocorrencias[j].end(),i);
            if(it == ocorrencias[j].end())
                continue;
            if(*it < menor){
                menor = *it;
                melhor = j;
            }
        }
        if(menor != n+1)
            cout << melhor;
        else
            cout << "*";
        cout << (i == n-1 ? '\n' : ' ');
    }

    return 0;
}