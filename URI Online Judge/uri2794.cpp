#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

typedef struct monte
{
    long long int d;
    long long int t;
}Monte;

bool Ehcomp(const Monte& m1, const Monte& m2)
{
    return m1.d < m2.d;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, quant;
    bool flag = true;

    cin>>quant;
    vector<Monte> v(quant);

    for(i = 0; i < quant; i++)
    {
        cin >> v[i].d >> v[i].t;
    }
    sort(v.begin(), v.end(), Ehcomp);

    for(i = 0; i < quant-1; i++)
    {
        if(v[i].t < v[i+1].t)
        {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    
    return 0;
}