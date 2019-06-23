#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, hash, x, c;
    vector <int> tabela[105];
    bool primeiro = true;

    scanf ("%d", &n);

    while (n--)
    {
        if (primeiro)
            primeiro = false;
        else
            printf ("\n");

        scanf ("%d %d", &hash, &c);

        for (int i = 0; i < c; i++)
        {
            scanf ("%d", &x);
            tabela[x % hash].push_back (x);
        }

        for (int i = 0; i < hash; i++)
        {
            printf ("%d ->", i);

            for (int j = 0; j < (int) tabela[i].size (); j++)
            {
                if (j + 1== (int) tabela[i].size ())
                    printf (" %d -> %s\n", tabela[i][j],  "\\");
                else
                    printf (" %d ->", tabela[i][j]);
            }

            if ((int) tabela[i].size () == 0)
                printf (" %s\n", "\\");
        }

        for (int i = 0; i <= hash; i++)
            tabela[i].clear ();
    }
    return 0;
}