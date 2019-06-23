#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set <string> ans;
    int num;

    while (cin >> num)
    {
        if(num < 90 || num == 360)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if(num < 180)
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if(num < 270)
        {
            cout << "Boa Noite!!" << endl;
        }
        else if(num < 360)
        {
            cout << "De Madrugada!!" << endl;
        }
    }
    return 0;
}