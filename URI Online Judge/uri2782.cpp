#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
  
    cin >> n;
    int  seq[n];
    for(int i = 0; i < n; i++ )
        cin >> seq[i];
  
    int res = 1;
  
    for ( int i = 2; i < n; i++ )
        if ( seq[i]-seq[i-1] != seq[i-1]-seq[i-2] )
            res++;
  
    cout << res << endl;
    return 0;
}