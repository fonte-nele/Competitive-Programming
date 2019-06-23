#include <bits/stdc++.h>
using namespace std;

int potenciade2(int x)
{
    if (x == 1) return 1;
    else return !(x & (x - 1));
}

int main ()
{
    int n, u, r, in, su, sr, sin;

    while(cin >> n && n != 0)
    {
        su = sr = sin = 0;
        while(n--)
        {
            cin >> u >> r >> in;
            if (potenciade2(u))
            {
                su++;
                if (u == max(max(r,in),u)) su++;
            }
            if (potenciade2(r))
            {
                sr++;
                if (r == max(max(r,in),u)) sr++;
            }
            
            if (potenciade2(in))
            {
                sin++;
                if (in == max(max(r,in),u)) sin++;
            }
        }
        if (su > sr && su > sin) cout << "Uilton" << endl;
        else
        {
            if (sr > su && sr > sin) cout << "Rita" << endl;
            else
            {
                if (sin > su && sin > sr) cout << "Ingred" << endl;
                else cout << "URI" << endl;
            }
        }
    }
}