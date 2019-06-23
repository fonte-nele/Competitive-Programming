#include <bits/stdc++.h>
using namespace std;

int val(long long int x)
{
    while (x >= 10)
    {
        long long aux = x;
        long long s = 0;
        
        while (aux)
        {
            s += aux % 10;
            aux /= 10;
        }
        x = s;
    }
    return x;
}

int main()
{
    string a, b;
    
    long long int a1, b1, total1, total2;
    
    while (cin >> a >> b)
    {
        if(a == "0" && b == "0")
        {
            break;
        }
        a1 = b1 = 0;
        
        for (int i = 0 ; i < a.size(); ++i) 
        {
            a1 += a[i] - '0';
        }
        for (int i = 0 ; i < b.size(); ++i)
        {
            b1 += b[i] - '0';
        }
        
        total1 = val(a1);
        total2 = val(b1);
        
        if(total1 > total2)
            cout << 1 << endl;
        else if(total1 < total2)
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }
}