#include <bits/stdc++.h>
using namespace std;

struct stru
{
    int o, p, b;
    string name;
};

bool compare (const stru a, const stru b)
{
    if (a.o > b.o)
        return true;
    else if (b.o > a.o)
        return false;
    else if (a.o == b.o)
    {
        if (a.p > b.p)
            return true;
        else if (b.p > a.p)
            return false;
        else if (b.p == a.p)
        {
            if (a.b > b.b)
                return true;
            else if (b.b > a.b)
                return false;
            else if (a.b == b.b)
            {
                if (a.name < b.name)
                    return true;
                else
                    return false;
            }
        }
    }

    return false;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    stru s;
    vector <stru> l;

    cin >> n;

    while (n--)
    {
        cin >> s.name >> s.o >> s.p >> s.b;
        l.push_back (s);
    }

    sort (l.begin (), l.end (), compare);

    for (auto i : l)
        cout << i.name << " " << i.o << " " << i.p << " " << i.b << endl;

    return 0;
}