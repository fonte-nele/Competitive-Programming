#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string frase;

    getline(cin, frase);

    for(int i = 0; i < (int)frase.size(); i++)
    {
        if(frase[i] == ',')
        {
            cout << endl;
            continue;
        }
        cout << frase[i];
    }
    cout << endl;

    return 0;
}