#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant, validade;
    string nome;
    vector <pair<int,string> > v;

    while(cin >> quant) 
    {
        for(int i = 0; i < quant; i++)
        {
            cin >> nome >> validade;
            v.push_back({validade, nome});
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < quant; i++)
        {
            if(i != quant-1)
            {
                cout << v[i].second << " ";
            }
            else
            {
                cout << v[i].second << endl;
            }
        }
        v.clear();
    }
    
    return 0;
}