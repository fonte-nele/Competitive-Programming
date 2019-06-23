#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k, x, y, z, w;
    vector<ii> v;
    vector<int> vv;
    cin >> t;
    while (t--) 
    {
        cin >> n >> k;
        v.clear();
        for (int i = 0; i < n; i++) 
        {
            cin >> x >> y >> z >> w;
            v.push_back(ii(-y*z*w, x));
        }

        sort(v.begin(), v.end());
        vv.clear();
        for (int i = 0; i < k; i++)
            vv.push_back(v[i].second);
        
        sort(vv.begin(), vv.end());
        for (int i = 0; i < k-1; i++)
            printf("%d ", vv[i]);
        printf("%d\n", vv[k-1]);
    }
    
    return 0;
}