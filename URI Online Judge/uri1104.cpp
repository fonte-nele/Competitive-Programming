#include <bits/stdc++.h>
using namespace std;

int a, b, x, goodaa, goodbb;
set <int> aa, bb;

int main () 
{
    while(cin >> a >> b) 
    {
        if(!a && !b) 
        	break;
        aa.clear(), bb.clear();
        goodaa = goodbb = 0;
        while (a--) 
        	scanf("%d", &x), aa.insert(x);
        while (b--) 
        	scanf("%d", &x), bb.insert(x);
        for(auto i : aa) 
        	if (!bb.count(i)) goodaa++;
        for (auto i : bb) 
        	if (!aa.count(i)) goodbb++;
        cout << min(goodaa, goodbb) << endl;
    }
    return 0;
}