#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> v(4);
    int dif;

    for(int i = 0; i < 4; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    dif = (v[0] + v[3]) - (v[1] + v[2]);
    cout << abs(dif) << endl;

    return 0;
}
