#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int valor[26];
    char x;

    valor[0] = 97;
    x = valor[0];
    cout << valor[0] << " e " << x << endl;

    for(int i = 1; i < 26; i++)
    {
        valor[i] = valor[i-1] +1;
        x = valor[i];
        cout << valor[i] << " e " << x << endl;
    }

    return 0;
}