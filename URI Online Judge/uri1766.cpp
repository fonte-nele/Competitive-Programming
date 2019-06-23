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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

typedef struct 
{
    st nome;
    int peso;
    int idade;
    double altura;
}Elfo;

bool comp(const Elfo& e1, const Elfo& e2)
{
    if(e1.peso != e2.peso)
        return e1.peso > e2.peso;
    else if(e1.idade != e2.idade)
        return e1.idade < e2.idade;
    else if(e1.altura != e2.altura)
        return e1.altura < e2.altura;
    else
        return (e1.nome < e2.nome);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, n, num, cont = 1;
    cin >> quant;

    while(quant--)
    {
        cin >> n >> num;

        vector<Elfo> v(n);

        f(0, n)
            cin >> v[i].nome >> v[i].peso >> v[i].idade >> v[i].altura;

        sort(all(v), comp);

        cout << "CENARIO {" << cont << "}" << endl;
        f(0, num)
            cout << i+1 << " - " << v[i].nome << endl;

        cont++;
    }

    return 0;
}