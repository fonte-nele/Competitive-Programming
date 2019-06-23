#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string frase, res;

    getline(cin, frase);

    for(int i=0; i < (int)frase.size(); i++)
    {
        if(frase[i] == 'p')
        {
            res.push_back(frase[i+1]);
            i++;
        }
        else
            res.push_back(frase[i]);
    }
    cout << res << endl;

    return 0;
}