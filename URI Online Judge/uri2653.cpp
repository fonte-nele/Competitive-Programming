#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set <string> ans;
    string s;

    while (cin >> s)
        ans.insert (s);
    printf ("%d\n", ans.size());
    return 0;
    
    return 0;
}