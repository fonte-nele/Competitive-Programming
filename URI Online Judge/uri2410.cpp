#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, quant;
    set <int> num;

    cin >> quant;
    
    for(int i = 0; i < quant; i++)
    {
        cin >> n;
        num.insert(n);
    }
    
    cout << num.size() << endl;
    return 0;
}
