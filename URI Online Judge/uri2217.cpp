#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant;
    long long int num;

    cin >> quant;

    for(int i = 0; i < quant; i++)
    {
        cin >> num;

        if(num % 2 == 0)
            cout << 1 << endl;
        else
            cout << 9 << endl;
    }

    return 0;
}