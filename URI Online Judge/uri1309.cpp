/*input
123456
0
49734321
9
20502030
70
*/
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
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string num;
    int fim;

    while(cin >> num >> fim)
    {
        string aux;
        bool ok = false;
        int cont = 0, pos = 0;
        f(0, (int)num.size())
        {
            if(num[i] != '0')
                ok = true;
        }
        if(ok)
        {
            while(num[0] == '0')
                num.erase(0, 1);
        }
        else
            num = "0";
        int tam = (int)num.size() +((int)num.size()-1)/3;
        aux.resize(tam, 0);
        //cout << tam << endl;
        cout << "$";
        reverse(num.begin(), num.end());
        for(int i = 0; i < (int)num.size(); i++, pos++)
        {
            cont++;
            aux[pos] = num[i];

            if(cont == 3){
                pos++;

                aux[pos] = ',';
                cont = 0;
            }
        }
        //cout << "aux " << aux << endl;
        reverse(aux.begin(), aux.end());
        cout << aux << '.';
        if(fim < 10)
            cout << 0 << fim << endl;
        else
            cout << fim << endl;
    }

    return 0;
}