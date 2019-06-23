#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x, k, v;
    
    while(cin >> n >> m)
    {
        map <int, vector<int>> mv;

        f(1, n+1)
        {
            cin >> x;
            mv[x].push_back(i);
        }
        while(m--)
        {
            cin >> k >> v;

            if(mv[v].size() < k)
                cout << 0 << endl;
            else
                cout << mv[v][k-1] << endl;
        }
    }

    return 0;
}