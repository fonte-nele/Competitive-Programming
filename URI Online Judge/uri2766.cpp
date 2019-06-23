#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string frase;


    for(int i = 0; i < 10; i++)
    {
        cin >> frase;
        if(i == 2 || i == 6 || i == 8)
            cout << frase << endl;
    }

    return 0;
}