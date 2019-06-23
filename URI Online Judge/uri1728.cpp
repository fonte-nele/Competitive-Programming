#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, a, b, c;
    int _a, _b, _c;
    size_t p;

    while(getline(cin,s))
    {
        p = s.find('+');
        a = s.substr(0, p); b = s.substr(p + 1);
        p = b.find('=');
        c = b.substr(p + 1); b = b.substr(0, p);

        reverse(begin(a), end(a)); _a = atoi(a.c_str());
        reverse(begin(b), end(b)); _b = atoi(b.c_str());
        reverse(begin(c), end(c)); _c = atoi(c.c_str());

        if(_a + _b == _c) puts("True");
        else puts("False");
    }

    return 0;
}