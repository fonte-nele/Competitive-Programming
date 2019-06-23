#include <bits/stdc++.h>
using namespace std;

const int N = 5e4+10;
int i, n, a[N], ans;

int main() 
{
    cin >> n;

    for(i = 1; i <= n; i++) 
        cin >> a[i];

    for(i = 1; i <= n; i++) 
        if (a[i] > min(i, a[i-1]+1)) 
            a[i] = min(i, a[i-1]+1);

    for(i = n; i; i--)
        if (a[i] > min(n-i+1, a[i+1]+1)) 
            a[i] = min(n-i+1, a[i+1]+1);

    for(i = 1; i <= n; i++) 
        ans = max(ans, a[i]);

    cout << ans << endl;

    return 0;
}