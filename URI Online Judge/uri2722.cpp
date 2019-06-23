#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant;
    string f1,f2;

    cin >> quant;

    getline(cin,f1);
    for(int i = 0; i < quant; i++)
    {
        getline(cin, f1);
        getline(cin, f2);

        for(int j = 0; j < (int)f1.size(); j+=2)
        {
            if(j+2 == (int)f1.size() && (int)f1.size() != (int)f2.size())
            {
                //cout << "-";
                cout << f1[j] << f1[j+1] << f2[j];
                break;
            }
            cout << f1[j] << f1[j+1] << f2[j] << f2[j+1];
        }
        cout << endl;
    }
    
    return 0;
}