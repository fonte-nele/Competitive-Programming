#include <bits/stdc++.h>
using namespace std;
#define f(valor, tam) for(int i = valor; i < tam; i++)
#define fr(valor, tam) for(int j = valor; j < tam; j++)

int main()
{
    long long n, m, pos, ant = -1;

    cin >> n >> m;
    long long mat[n][m];

    f(0, n)
    {
        fr(0, m)
        {
            cin >> mat[i][j];
        }
    }

    bool flag = true, aux = false;

    f(0, n)
    {
        fr(0, m)
        {
            if(mat[i][j] != 0)
            {
                if(aux)
                {
                    flag = false;
                    break;
                }
                pos = j;
                if(ant == -1)
                    ant = pos;
                else if(pos <= ant)
                    flag = false;

                ant = pos;
                break;
            }
            if(j == m-1)
            {
                aux = true;
            }
        }
    }
    if(flag)
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}