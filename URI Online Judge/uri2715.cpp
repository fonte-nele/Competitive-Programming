#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    while(cin >> n)
    {
        vector<long long> el(n), prefSum(n);
        long long sum = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> el[i];
            sum += el[i];
        }
        
        prefSum[0] = el[0];
        
        for(int i = 1; i < n; i++) {
            prefSum[i] = prefSum[i-1] + el[i];
        }
        
        long long ans = INT_MAX;
        
        for(long long v : prefSum) {
            ans = min(ans, abs(sum - v - v));
        }
        
        cout << ans << endl;
    }
    
    return 0;
}