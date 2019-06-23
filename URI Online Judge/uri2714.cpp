#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j, quant;
    string senha;
    cin >> quant;

    for(i = 0; i < quant; i++)
    {
        cin >> senha;
        if(senha[0] != 'R' || senha[1] != 'A')
        {
            cout << "INVALID DATA" << endl;
        }
        else
        {
            int tam = senha.size();
            if(tam != 20)
                cout << "INVALID DATA" << endl;
            else
            {
                for(j = 2; j < tam; j++)
                {
                    if(senha[j] != '0')
                        break;
                }
                cout << senha.substr(j, 20-j) << endl;
            }
        }
    }
    return 0;
}