#include <bits/stdc++.h>
using namespace std;

long long mdc (long long x, long long y) 
{
    if (x % y == 0) 
        return y; 
    else 
        return mdc(y, x % y);
}

int main () 
{
    long long a, b, c;
    while(cin >> a >> b >> c) 
    {
        if (a*a != b*b + c*c && b*b != a*a + c*c && c*c != a*a + b*b)
            cout << "tripla" << endl;
        else if ((a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) && (mdc(mdc(a,b),mdc(a,c)) == 1))
            cout << "tripla pitagorica primitiva" << endl;
        else
            cout << "tripla pitagorica" << endl;
    }
    return 0;
}