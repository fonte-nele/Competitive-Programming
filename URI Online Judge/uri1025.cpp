#include <bits/stdc++.h>
using namespace std;

int a, b, k, ans;
vector <int> v;

int main () 
{
	int i = 1;
    while(cin >> a >> b && a != 0 && b != 0) 
    {
        v.clear();
        while(a--)
        { 
        	cin >> k;
        	v.push_back(k);
        }
        
        cout << "CASE# " << i << ":" << endl;
        sort(v.begin(), v.end());
        
        while(b--) 
        {
            cin >> k;
            ans = -1;
            for(int i = 0; i < v.size(); i++) 
            {
                if (v[i] == k) 
                	ans = i+1;
                else 
                	continue;
                break;
            }
            if(ans == -1) 
            	cout << k << " not found" << endl;
            else 
            	cout << k << " found at " << ans << endl;
        }
        i++;
    }
    return 0;
}