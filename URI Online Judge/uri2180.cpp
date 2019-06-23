#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

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
    crivo(60100);

    int peso, sum = 0;
    ll i = 0;
    cin >> peso;
    
    while(primos[i] < peso)
        i++;

    ll tam = i;
    for(i; i < tam+10; i++)
    {
        sum += primos[i];
        //cout << primos[i] << " " << i << endl;
    }
    cout << sum << " km/h" << endl;
    cout << 60000000/sum << " h / " << (60000000/sum)/24 << " d" << endl;

    return 0;
}