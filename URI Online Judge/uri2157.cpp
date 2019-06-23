#include <bits/stdc++.h> 
using namespace std;

int main() 
{
    int n, m, i, j, t;
    char ss[101] ;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(i = n;i <= m; i++)
        {
            cout << i;
        }
        for(i = m;i >= n; i--)
        {
            sprintf(ss, "%d",i);
            for(j = strlen(ss)-1;j>=0;j--) 
                cout << ss[j];
        }
        cout << endl;
    }
    return 0;
}