#include <bits/stdc++.h>
using namespace std;

int n;
string s, ss;

int main () 
{
    getline(cin, s);
    while(1) 
    {
        sscanf(s.c_str(), "%d", &n);
        map <string, set<string> > m;
        for (int i = 0; i < n; i++) 
        {
            cin >> s;
            for (int j = 0; j < 3; j++) 
            {
                cin >> ss;
                m[s].insert(ss);
            }
        }
        while(cin >> s) 
        {
            if (s[0] > '0' && s[0] < '9') break;
            cin >> ss;
            cout << (m[s].count(ss) ? "Uhul! Seu amigo secreto vai adorar o/" : "Tente Novamente!") << endl;
        }
        if(!(s[0] > '0' && s[0] < '9')) break;
    }
    return 0;
}