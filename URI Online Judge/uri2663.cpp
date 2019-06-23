#include <bits/stdc++.h>
using namespace std;

int main () 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int n;
    cin >> n;

    if(n % 2 == 0)
    {
        cout << n+2 << endl;
    }
    else
    {
        cout << n+1 << endl;
    }
    return 0;
}