#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, quant, num;

    while(cin >> quant && quant != 0)
    {
        
        while(cin >> num && num != 0)
        {
            vector<int> seq(quant);
            seq[0] = num;
            for(i = 1; i < quant; i++)
            {
                cin >> seq[i];
            }
            reverse(seq.begin(), seq.end());

            stack<int> p;
            for(i = 1; i <=quant; i++)
            {
                p.push(i);
                while (!p.empty () && p.top () == seq.back())
                    p.pop (), seq.pop_back ();
            }
            
            if (p.empty () && seq.size () == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        cout << endl;
    }

    return 0;
}
