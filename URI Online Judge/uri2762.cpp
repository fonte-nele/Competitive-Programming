#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string frase, frase2, frase3;
    cin >> frase;

    for(int i = 0; i < (int)frase.size(); i++)
    {
        if(frase[i] == '.')
        {
            frase2 = frase.substr(0,i);
            frase3 = frase.substr(i+1,(int)frase.size());
        }
    }
    cout << atoi(frase3.c_str()) << '.' << atoi(frase2.c_str()) << endl;
    return 0;
}