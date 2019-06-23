#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j, n, tam;
    string titan;

    cin >> n >> tam;

    getline(cin, titan);
    for(int i = 0; i < n; i++)
    {
        getline(cin, titan);
        //cout << titan << endl;

        int valor = 0, m = 1;
        for(j = (int)titan.size()-1; isdigit(titan[j]); j--)
        {
            valor += (titan[j] - '0')*m;
            m*=10;
        }

        //cout << valor << endl;
        if(valor > tam)
        {
            for(int k = 0; k < j; k++)
                cout << titan[k];

            cout << endl;
        }
    }

    return 0;
}
