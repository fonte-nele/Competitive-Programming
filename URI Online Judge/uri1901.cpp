#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i, j;
    long long n;
    while(cin >> n) 
    {
        set<int> seen;
        vector<vector<int> >  g(n, vector<int>(n));
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < n; ++j)
            {
                cin >> g[i][j];
            }
        }

        int x, y;
        for(i = 0; i < 2 * n; ++i) 
        {
            cin >> x >> y;
            seen.insert(g[x - 1][y - 1]);
        }
        cout << seen.size() << endl;
    }
    return 0;
}