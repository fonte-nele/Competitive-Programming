#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j, quant, num;
    cin >> quant;

    for(i = 0; i < quant; i++)
    {
        cin >> num;
        vector<int> v(num);
        for(j = 0; j < num; j++)
        {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        for(j = 0; j < num-1; j++)
        {
            cout << v[j] << " ";
        }
        cout << v[num-1] << endl;
    }

    return 0;
}
