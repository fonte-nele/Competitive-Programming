#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
int n;
string s;

int main () 
{
    int i;
    scanf("%d", &n);
    while (n--) 
    {
        cin >> s;
        vi ind;
        for(i = 0; i < s.size(); i++)
        {
            if (s[i] == 'm') 
                ind.push_back(i+1);
        }
        ind[1] -= ind[0];
        ind[1] -= 3;
        ind[0] -= 2;
        cout << 'k';
        for(i = 0; i < ind[0]*ind[1]; i++)
        {
            cout << 'a';
        }
        cout << endl;
    }
    return 0;
}