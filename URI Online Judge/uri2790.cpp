#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, i, a=0,b=0,c=0,d=0,e=0,f=0;
    //bool flag = true;

    cin >> quant;
    vector<int> v(quant);

    for(i = 0; i < quant; i++)
    {
        cin >> v[i];
    }
    for(i = 0; i < quant; i++)
    {
        switch(v[i])
        {
            case 1:
            {
                a += 0, b+= 1, c += 1, d+= 1, e+=1, f+=2;
                break;
            }
            case 2:
            {
                a += 1, b+= 0, c += 1, d+= 1, e+=2, f+=1;
                break;
            }
            case 3:
            {
                a += 1, b+= 1, c += 0, d+= 2, e+=1, f+=1;
                break;
            }
            case 4:
            {
                a += 1, b+= 1, c += 2, d+= 0, e+=1, f+=1;
                break;
            }
            case 5:
            {
                a += 1, b+= 2, c += 1, d+= 1, e+=0, f+=1;
                break;
            }
            case 6:
            {
                a += 2, b+= 1, c += 1, d+= 1, e+=1, f+=0;
                break;
            }

        }
    }
    cout << min(a,min(b,min(c,min(d,min(e,f))))) << endl;

    
    
    
    return 0;
}