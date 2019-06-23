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
const int N = (int)1e3 + 10;

 int m[N][N], f[N];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int lin, col, casas;

    cin >> lin >> col >> casas;

    f(1, lin+1)
    {
        fr(1, col+1)
        {
            cin >> m[i][j];
            if(!m[i][j]) 
                continue;
            f[j] = 1;
        }
    }
    for(int i = 1; i <= col; i++) 
    {
        if(f[i] && f[i - 1]) 
        {
            puts("N");
            return 0;
        }
    }
    for(int j = 1; j <= col; j++) 
    {
        int lst[2];
        lst[0] = lst[1] = -1;
        for(int i = 1; i <= lin; i++) 
        {
            if(!m[i][j]) 
                continue;
            int x = m[i][j] - 1;
            if(lst[x] != -1) 
            {
                int d = i - lst[x] - 1;
                if(d < casas) 
                {
                    puts("N");
                    return 0;
                }
            }
            lst[x] = i;
        }
    }
    puts("S");

    return 0;
}