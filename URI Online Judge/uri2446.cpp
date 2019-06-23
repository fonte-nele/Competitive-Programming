#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define MAX 100001
#define MAXM 1001
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, m;
    vector<int> v(MAXM);
    vector<int> mochila(MAX);

    cin >> p >> m;
    f(0, m)
    {
        cin >> v[i];
    }
    f(0, m)
        mochila[i] = 0;

    mochila[0] = 1;

    f(0, m)
    {
        for(int j = p; j >= v[i]; j--)
            if (mochila[j - v[i]] == 1)
                mochila[j] = 1;
    }

    if (mochila[p] == 1)
        cout << "S" << endl;
    else
        cout << "N" << endl;


    return 0;
}