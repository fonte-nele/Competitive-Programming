#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, vol, n;

    cin >> vol >> quant;

    for(int i = 0; i < quant; i++)
    {
        cin >> n;
        vol += n;

        if(vol > 100)
            vol = 100;
        else if(vol < 0)
            vol = 0;
    }

    cout << vol << endl;

    return 0;
}