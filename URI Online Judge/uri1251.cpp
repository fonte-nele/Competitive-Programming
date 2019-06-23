#include <bits/stdc++.h>

using namespace std;


bool comp (pair <char, int> a, pair <char, int> b)
{
    if (a.second == b.second)
        if (a.first > b.first)
            return true;
        else
            return false;
    else
        if (a.second < b.second)
            return true;
        else
            return false;
    return false;
}
int main ()
{
    map <char, int> lista;
    vector <pair <char, int> > ans;
    string s;
    bool primeiro = true;

    while (cin >> s && !cin.eof ())
    {
        if (primeiro)
            primeiro = false;
        else
            printf ("\n");

        for (auto i : s)
            lista[i]++;

        for (auto i : lista)
            ans.push_back (make_pair (i.first, i.second));


        sort (ans.begin (), ans.end (), comp);

        for (auto i: ans)
            printf ("%d %d\n", i.first, i.second);

        ans.clear ();
        lista.clear ();
    }

    system ("pause");
    return 0;
}