#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> num(3);
    
    for(int i = 0; i < 3; i++)
        cin >> num[i];
    
    sort(num.begin(),num.end());
    cout << num[1] << endl;
    return 0;
}
