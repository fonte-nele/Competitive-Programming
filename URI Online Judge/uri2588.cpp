#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, v[26], cont;
    string pal;

    while(cin >> pal)
    {
        cont = 0;
        memset(v, 0, sizeof(v));

        for(i = 0; i < (int)pal.size(); i++)
        {
            v[pal[i] - 'a']++;
        }
        for(i = 0; i < 26; i++)
        {
            if(v[i] != 0 && v[i] % 2 == 1)
                cont++;
        }
        cout << (cont == 0 ? 0 : cont -1) << endl;
    }

    return 0;
}
