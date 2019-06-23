#include <bits/stdc++.h>
using namespace std;

int GCDsimp (int num, int den) {
    //cout << num << den;
    if (den > 0)
        return GCDsimp (den, num % den);
    return num;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, den, apostas [100], cont = 0;

    while (cin >> num >> den) 
    {
        apostas[++cont] = GCDsimp (num,den);
        if(apostas[cont] > 5)
            cout << "Noel" << endl;
        else
            cout << "Gnomos" << endl;
    }
    for (int i = cont; i>0; i--) {
        cout << apostas[i] << " ";
    }
    cout << endl;

    return 0;
}