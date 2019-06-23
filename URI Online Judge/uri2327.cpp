/*input
3
2 7 6
9 5 1
4 3 8
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

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, soma = 0, soma1 = -1;
    bool flag = true;
    cin >> n;
    int m[n][n];

    f(0, n)
    {
        fr(0, n)
        {
            cin >> m[i][j];
        }
    }

    f(0, n)
    {
        fr(0, n)
        {
            soma += m[i][j];
        }
        if(soma1 == -1)
        {
            soma1 = soma;
        }
        else
        {
            if(soma != soma1)
                flag = false;
        }
        soma = 0;
    }
    f(0, n)
    {
        fr(0, n)
        {
            soma += m[j][i];
            //cout << "Elemento " << m[i][j] << " soma = " << soma << endl;
        }
        if(soma != soma1)
            flag = false;
        soma = 0;
    }
    int i, j;
    for(i=0,j=0; i < n; i++,j++)
    {
        soma += m[i][j];
    }
    if(soma != soma1)
        flag = false;
    soma = 0;

    for(i=0,j=n-1; i < n; i++,j--)
    {
        soma += m[i][j];
    }
    if(soma != soma1)
        flag = false;

    if(!flag)
        cout << -1 << endl;
    else
        cout << soma1 << endl;

    return 0;
}