#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int comp, dist, custo, valor, total, quant;

    cin >> comp >> dist >> custo >> valor;

    total = custo * comp;
    quant = comp / dist;

    total += (quant * valor);
    cout << total << endl;

    return 0;
}
