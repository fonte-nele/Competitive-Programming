#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string frase;
    int quant, n, m, cont;
    bool flag;

    while (cin >> quant && quant != 0)
    {
        cont = 0;

        do{
            flag = false;
            cin >> n;
            for(int i = 0; i < quant-1; i++)
            {
                cin >> m;
                if(m < n)
                    flag = true;
                n = m;
            }
            cont ++;
        }while(flag);

        cout << cont << endl;
    }
    return 0;
}