#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num, maior = 0;
    
    while (cin >> num && num != 0)
    {
        if(num > maior)
            maior = num;
    }
 
    cout << maior << endl;
    return 0;
}
