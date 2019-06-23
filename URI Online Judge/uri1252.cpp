#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int n, m;

bool Ehcomp(int p1, int p2)
{
    if(p1%m == p2%m)
    {
        if(abs(p1) % 2 == abs(p2) % 2)
        {
            if (p1 % 2 != 0)
                return p1 > p2;
            else
                return p2 > p1;
        }
        return abs (p1) % 2 > abs (p2) % 2;

    }
    return p1%m < p2%m;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i;

    while(cin >> n >> m && n!=0 && m!=0)
    {
        vector<int> v(n);
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), Ehcomp);

        cout << n << " " << m << endl;
        for(i = 0; i < n; i++)
        {
            cout << v[i] << endl;
        }
    }
    cout << "0 0" << endl;
    
    
    return 0;
}