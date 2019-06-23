#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

struct subset
{
    int pai;
    int rank;
};
 
int find(vector<subset> &subsets, int i)
{
    if (subsets[i].pai != i)
        subsets[i].pai = find(subsets, subsets[i].pai);
 
    return subsets[i].pai;
}
 
void uniao(vector<subset> &subsets, int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
 
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].pai = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].pai = xroot;
    else
    {
        subsets[yroot].pai = xroot;
        subsets[xroot].rank++;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    
    cin >> N >> K;
    
    vector<subset> bank(N);
    
    for(int i = 0; i < N; i++)
    {
        bank[i].pai = i;
        bank[i].rank = 0;
    }
    
    for(int i = 0; i < K; i++)
    {
        char op[2];
        int a, b;
        
        cin >> op >> a >> b;
        
        if(op[0] == 'F')
        {
            uniao(bank, a - 1, b - 1);
        }
        else
        {
            cout << (find(bank, a - 1) == find(bank, b - 1) ? "S" : "N") << endl;
        }
    }
    return 0;
}