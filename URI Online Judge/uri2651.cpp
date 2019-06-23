#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string link;
    cin >> link;

    for(int i = 0; i < link.size();i++)
    {
        link[i] = tolower(link[i]);
    }

    if(link.find("zelda") != -1)  cout << "Link Bolado\n";
    else cout << "Link Tranquilo\n";

    return 0;
}