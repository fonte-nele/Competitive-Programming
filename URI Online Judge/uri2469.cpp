#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i, n, num, valor = 0, max = 0;

    cin >> n;
    map <int, int> v;
    for(i = 0; i < n; i++)
    {
        cin >> num;
        v[num]++;
    }
    
    for(auto f : v)
    {
        if (f.second >= max && f.first > valor) 
        {
            valor = f.first;
            max = f.second;
        }
    }
    cout << valor << endl;
    return 0;
}