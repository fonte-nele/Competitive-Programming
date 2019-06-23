#include <bits/stdc++.h>
using namespace std;
#define fst first
#define snd second

typedef pair<int, int> ii;

int main()
{
    int N, i, j, custo;
    ii v[1001];
    while(cin >> N){
        for(i = 0; i < N; i++)
        {
            cin >> v[i].fst;
        }
        for(i = 0; i < N; i++)
        {
            cin >> v[i].snd;
        }
        custo = 0;
        for(i = 0; i < N; i++)
        {
            for(j = 1; j < N; j++)
            {
                if(v[j-1].fst > v[j].fst)
                {
                    swap(v[j-1], v[j]);
                    custo += v[j-1].snd + v[j].snd;
                }
            }
        }
        cout << custo << endl;
    }
    return 0;
}