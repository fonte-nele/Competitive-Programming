#include <bits/stdc++.h>
using namespace std;

int n, cnt, x, y;

int main () 
{
    while (scanf("%d", &n) and n and ++cnt) 
    {
        int a = 0, b = 0;
        cout << "Teste " << cnt << endl;
        while (n--)
        {
            cin >> x >> y;
            a+=x, b+=y;
            cout << a - b << endl;
        }
        cout << endl;
    }
    return 0;
}