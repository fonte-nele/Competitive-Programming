#include <bits/stdc++.h>
using namespace std;

int main () 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int n, aux = 0, valor = 0;
    bool flag = true;
    
    while(cin >> n)
    {
        if(aux >= n && flag)
        {
            valor = aux+1;
            flag = false;
        }
        aux = n;
    }
    if(valor == 0)
    {
        cout << n+1 << endl;
    }
    else
    {
        cout << valor << endl;
    }
    
    return 0;
}