#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long s = 2, quant, result=1;

    cin >> quant;
    
    while(s <= quant)
    {
        s *= 2;
        result *= 4;
    }
    cout << result << endl;
    return 0;
}
