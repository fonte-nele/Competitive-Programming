#include <bits/stdc++.h>
using namespace std;

int H (int n)
{
    if (n == 1)
        return 1;
    return 2 * H (n - 1) + 1;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cont = 1;

    while(cin >> n && n != 0)
    {
        cout << "Teste " << cont++ << endl << H(n) << endl << endl;
    }

    return 0;
}