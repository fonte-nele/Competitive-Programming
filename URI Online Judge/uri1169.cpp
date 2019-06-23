#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int i, n;
    cin >> n;
    for(i = 0; i < n; i++) 
    {
        int k;
        cin >> k;
        long long r = pow(2, k) / 12000;
        cout << r <<" kg" << endl;
    }
    return 0;
}