#include <bits/stdc++.h>
using namespace std;

int i, j, n, k;
long long num;

int main () 
{
    cin >> n;
    for(i = 0; i < n; i++) 
    {
        cin >> k;
        num = 1;
        for(j = 0; j < k; j++)
        {
            num *= 2;
        }
        cout << num-1 << endl;
    }
    return 0;
}