#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int j, d, i, x, f;

    cin >> d >> i >> x >> f;

    for(j = 0; j < f; j++)
    {
        d++;
        if(d % 2 == 0)
            i += x;
        else
            i -= x;
    }
    cout << i << endl;

    return 0;
}