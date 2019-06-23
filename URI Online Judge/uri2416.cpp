#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int c, n;
    cin >> c >> n;

    if(c >= n)
        cout << c%n << endl;
    else 
        cout << n%c << endl;
    return 0;
}
