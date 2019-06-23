#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<double> num(5);
    double soma = 0.0;

    for(int i = 0; i < 5; i++)
        cin >> num[i];

    sort(num.begin(), num.end());

    for(int i = 1; i < 4; i++)
        soma += num[i];

    cout << fixed << setprecision(1) << soma << endl;

    return 0;
}
