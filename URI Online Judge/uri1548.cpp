#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main () 
{
    int i, j, n;
    cin >> n;

    for(i = 0; i < n; i++) 
    {
        int k;
        cin >> k;
        int res = 0;
        vector <int> fila;
        multiset <int> s;
        for(j = 0; j < k; j++) 
        {
            int x;
            cin >> x;
            fila.push_back(x);
            s.insert(x);
        }
        vector <int> ord(s.begin(), s.end());
        reverse(fila.begin(), fila.end());
        for(j = 0; j < ord.size(); j++)
            if (ord[j] == fila[j])
                res++;
        cout << res << endl;
    }
    return 0;
}