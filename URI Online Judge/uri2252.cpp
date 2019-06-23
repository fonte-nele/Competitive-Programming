#include <bits/stdc++.h>
using namespace std;

typedef pair<double, int> pdi;
typedef vector<pdi> vpdi;

bool cond(pdi a, pdi b) 
{
    return (a.first > b.first);
}

int main() 
{
    int i, n, k = 1;
    double d;

    while(cin >> n) 
    {
        vpdi arr(10);
        for(i = 0; i < 10; i++) 
        {
            cin >> d;
            arr[i] = pdi(d, i);
        }

        sort(arr.begin(), arr.end(), cond);

        cout << "Caso " << k++ << ": ";
        for(i = 0; i < n; i++)
            cout << arr[i].second;

        cout << endl;
    }
  return 0;
}