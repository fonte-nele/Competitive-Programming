#include <bits/stdc++.h>
#include <cstdint>
#define ll unsigned long long

using namespace std;

set <ll> p;
char alfa[] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";

int main () 
{
    ll f = 1;
    for (int i = 0; i <= 12; i++)
        p.insert(f), f *= 32;
    vector <ll> pp(p.begin(), p.end());
    reverse(pp.begin(), pp.end());
    ll n;
    while(cin >> n && n != 0) 
    {
        int ind = 0;
        char res[] = "0000000000000";
        while(1) 
        {
            while(n < pp[ind] && n > 0) 
            {
                ind++;
            }
            int count = 0;
            while(n >= pp[ind]) 
            {
                count++;
                n -= pp[ind];
            }
            res[ind] = alfa[count];
            if (!n || pp[ind] == 1) break;
        }
        int istart = 0;
        while (res[istart] == 48) istart++;
        for (int i = istart; i < 13; i++) 
        {
            cout << res[i];
        }
        cout << endl;
    }
    cout << 0 << endl;
    return 0;
}