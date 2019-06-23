#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, quant;
    cin >> quant;

    vector<int> v(quant-1);

    for(int i = 0; i < quant-1; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    if(v[0] != 1)
        cout << 1 << endl;
    else if(v[quant-2] != quant)
        cout << quant << endl;

    for(i = 1; i < quant-1; i++)
    {
        //cout << v[i] << endl;
        if(v[i] - v[i-1] > 1)
        {
            cout << v[i]-1 << endl;
            break;
        }
    }
   

    return 0;
}