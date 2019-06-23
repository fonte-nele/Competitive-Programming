#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int sz;
vector<ll> primos;

void crivo(int n)
{
    bitset<1000010> bs;
    bs.set();

    bs[0] = bs[1] = 0;
    sz = n + 1;
    for(ll i = 2; i <= sz; i++)
    {
        if(bs[i])
        {
            for(ll j = i * i; j <= sz; j += i)
                bs[j] = 0;
            primos.push_back(i);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, quant, p, q, n;
    crivo(1000001);

    while(cin >> quant && quant != 0) 
    {
        n = quant;

        for(i = 0; i < primos.size(); i++)
        {
            if(quant % primos[i] == 0)
            {
                p = primos[i];
                quant /= primos[i];
                break;
            }
        }
        for(; i < primos.size(); i++)
        {
            if(quant % primos[i] == 0)
            {
                q = primos[i];
                quant /= primos[i];
                break;
            }
        }
        printf("%lld = %lld x %lld x %lld\n", n, p, q, quant);
    }
    
    return 0;
}