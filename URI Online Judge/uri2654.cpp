#include <bits/stdc++.h>
using namespace std;

typedef struct no
{
    string nome;
    int poder;
    int deus;
    int morte;
}Nome;

bool forca (const Nome& n1, const Nome& n2)
{
    if(n1.poder != n2.poder)
        return n1.poder > n2.poder;
    else if(n1.deus != n2.deus)
        return n1.deus > n2.deus;
    else if(n1.morte != n2.morte)
        return n1.morte < n2.morte;
    else
        return n1.nome < n2.nome;
}


int main()
{
    int quant;
    

    cin >> quant;
    vector<Nome> v (quant);

    for(int i = 0; i < quant; i++)
    {
        cin >> v[i].nome >> v[i].poder >> v[i].deus >> v[i].morte;
    }
    sort(v.begin(), v.end(), forca);

    
    cout << v[0].nome << endl;
    

    return 0;
}