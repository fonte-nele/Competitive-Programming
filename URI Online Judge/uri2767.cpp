#include <bits/stdc++.h>
#define fr(inicio, fim) for(int i = inicio; i < fim; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, h, rem[100001];
    
    while(cin >> n >> m >> k){  // O(n + m + k)
        long long cont = 0;
        
        memset(rem, 0, sizeof(rem));
        fr(0, n){
            cin >> h;
            rem[h % k]++;   // Quantas alturas de resto tal existem em homens
        }

        fr(0, m){
            cin >> h;
            cont += rem[(k - (h % k)) %k]; // 
        }
        cout << cont << "\n";
    }
    return 0;
}