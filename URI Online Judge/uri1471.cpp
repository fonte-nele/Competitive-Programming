#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int i, n, r;
    while(cin >> n >> r) 
    {
        vector <int> vol;
        vol.push_back(0);
        for(i = 0; i < n; i++) 
        	vol.push_back(1);
        for(i = 0; i < r; i++) 
        {
            int k;
            cin >> k;
            vol[k] = 0;
        }
        int noprint = 1;
        for (int i = 0; i < vol.size(); i++)
            if (vol[i]) printf("%d ", i), noprint = 0;
        if (noprint) printf("*\n"); else printf("\n");
    }
    return 0;
}