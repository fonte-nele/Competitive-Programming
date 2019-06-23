#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, pos;

    cin >> quant >> pos;

    vector<string> v(quant);

    for(int i = 0; i < quant; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[pos - 1] << endl;

    return 0;
}
