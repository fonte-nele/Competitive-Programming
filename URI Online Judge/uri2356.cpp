#include <bits/stdc++.h>
using namespace std;

int main()
{
    string bact, parte;
    int pos;

    while(cin >> bact)
    {
        cin >> parte;

        pos = bact.find(parte, 0);
        if(pos != -1)
            cout << "Resistente" << endl;
        else
            cout << "Nao resistente" << endl;

    }
    return 0;
}