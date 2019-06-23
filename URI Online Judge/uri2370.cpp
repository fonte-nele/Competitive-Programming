#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

typedef struct n
{
    string nome;
    int r;
}Times;

bool Ehcomp(const Times& t1, const Times& t2)
{
    return t1.r > t2.r;
}

bool CompStr(const string& t1, const string& t2)
{
    return t1 < t2;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, k = 1, p = 0;

    cin >> m >> n;
    vector<Times> v(m);

    f(0, m)
    {
        cin >> v[i].nome >> v[i].r;
    }
    sort(v.begin(), v.end(), Ehcomp);
    vector <vector<string> > tt;
    tt.resize(n);

    f(0, m)
    {
        tt[p].push_back(v[i].nome); 
        p++;
        if(p == n)
            p = 0;
    }
    f(0, n)
    {
        sort(tt[i].begin(), tt[i].end(), CompStr);
    }
    f(0, n)
    {
        cout << "Time " << k << endl;
        int tam = tt[i].size();
        fr(0, tam)
        {
            cout << tt[i][j] << endl;
        }
        cout << endl;
        k++;
    }
    return 0;
}