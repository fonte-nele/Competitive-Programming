#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

char fz[1024][128], z1[128], z2[128], i1[128], i2[128], ns[128];
int mf, minimo, maximo;

int add(char *res, char *z1, char *z2)
{
    int c=0, i;
    res[127] = 0;
    for(i=126; i>=0; i--)
    {
        res[i] = z1[i]+z2[i]-'0'+c;
        if (res[i] > '9')
        {
            c=1; 
            res[i]-=10;
        }
        else
            c=0;
    }
    return c;
}

void zpad(char *res, char *z)
{
    int l, i;
    for(i=0; i<127; i++) 
        res[i] = '0';
    res[127] = 0;
    for(l=0; l<127; l++)
    {
        if (z[l] == 0) break;
    }
    for(i=0; i<l; i++)
    {
        res[127-l+i] = z[i];
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ia, ib;
    mf = 2; 
    zpad(fz[0], "1"); 
    zpad(fz[1], "2"); 
    zpad(ns, "0");
    while(add(fz[mf], fz[mf-2], fz[mf-1])==0)
        mf++;

    while(scanf("%s %s", i1, i2) && i1 != "0" && i2 != "0")
    {
        zpad(z1, i1); zpad(z2, i2);
        if (strcmp(z2, ns) == 0) break;
        for(minimo=mf-1; minimo>=0; minimo--)
        {
            if (strcmp(z1, fz[minimo]) > 0) break;
        }
        for(maximo=0; maximo<mf; maximo++)
        {
            if (strcmp(z2, fz[maximo]) < 0) break;
        }
        cout << maximo-minimo-1 << endl;
    }

    return 0;
}