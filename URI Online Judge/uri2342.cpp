#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, n1, n2;
    char c;

    cin >> quant >> n1 >> c >> n2;

    if(c == '+')
    {
        if(n1 + n2 <= quant)
            cout << "OK" << endl;
        else
            cout << "OVERFLOW" << endl;
    }
    else if(c == '*')
    {
        if(n1*n2 <= quant)
            cout << "OK" << endl;
        else
            cout << "OVERFLOW" << endl;
    }

    return 0;
}