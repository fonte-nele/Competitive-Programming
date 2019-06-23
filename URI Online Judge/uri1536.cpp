#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int i, n;
    cin >> n;
    for(i = 0; i < n; i++) 
    {
        int a, b, c, d;
        char x;
        cin >> a >> x >> b;
        cin >> c >> x >> d;
        if(a == c and b == d) 
        {
            cout << "Penaltis" << endl;
            continue;
        }
        if(a + d > b + c) 
        {
            cout << "Time 1" << endl;
            continue;
        }
        if(b + c > a + d) 
        {
            cout << "Time 2" << endl;
            continue;
        }
        if (b > d) 
        {
            cout << "Time 2" << endl;
        } 
        else 
        {
            cout << "Time 1" << endl;
        }
    }
    return 0;
}