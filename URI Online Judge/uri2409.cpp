#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, h, l;

    cin >> a >> b >> c >> h >> l;
    
    if((a <= h && b <= l) || (a <= l && b <= h))
        cout << "S" << endl;
    else if((a <= h && c <= l) || (a <= l && c <= h))
        cout << "S" << endl;
    else if((b <= h && c <= l) || (b <= l && c <= h))
        cout << "S" << endl;
    else
        cout << "N" << endl;


    return 0;
}
