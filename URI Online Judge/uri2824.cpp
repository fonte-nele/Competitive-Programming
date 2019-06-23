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
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int lcs(string &X, string &Y)
{
    int m = X.length(), n = Y.length();
 
    int L[2][n + 1];
 
    bool bi;
 
    for (int i = 0; i <= m; i++)
    {
         
        bi = i & 1;
 
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[bi][j] = 0;
 
            else if (X[i-1] == Y[j-1])
                 L[bi][j] = L[1 - bi][j - 1] + 1;
 
            else
                L[bi][j] = max(L[1 - bi][j], 
                               L[bi][j - 1]);
        }
    }
 
    return L[bi][n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string X;
    string Y;
 
    cin >> X >> Y;
 
    cout << lcs( X, Y) << endl;
 
    return 0;
}