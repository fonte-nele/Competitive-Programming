#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<int> seq(41);

    seq[0] = seq[1] = 1;
    for(int i = 2; i < 41; i++)
    {
        seq[i] = seq[i-1] + seq[i-2];
        //cout << seq[i] << endl;
    }

    cin >> n;
    for(int i = n-1; i >0; i--)
    {
        cout << seq[i] << " ";
    }
    cout << seq[0] << endl;
    
    return 0;
}