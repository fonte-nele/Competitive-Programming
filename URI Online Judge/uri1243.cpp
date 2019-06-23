/*input
This is a problem statement
523hi.
Implement a class H5 which contains some method.
 no9 . wor7ds he8re. hj..
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
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int soma, contador;
    string frase, sub;

    while(getline(cin, frase))
    {
        soma = 0;
        contador = 0;
        int pos = 0, ant = 0;
        bool flag = true;

        while(pos != -1){
            flag = true;
            pos = frase.find(" ", pos+1);

            sub = frase.substr(ant, pos-ant);
            ant = pos+1;
            //cout << sub << endl;
            if(sub[0] == ' ')
                sub.erase(0, 1);
            if(sub[(int)sub.size()-1] == '.')
                sub.erase((int)sub.size()-1, 1);
            int tam = sub.size();
            f(0, tam){
                if(sub[i] == ' ' || sub[i] == '.' || sub[i] == '0' || sub[i] == '1' || sub[i] == '2' || sub[i] == '3' || sub[i] == '4' || sub[i] == '5' || sub[i] == '6' || sub[i] == '7' || sub[i] == '8' || sub[i] == '9'){
                    flag = false;//cont++;
                    break;
                }
            }
            if(tam == 0)
                flag = false;

            //if(tam-cont != 0)
            //    contador++;
            //soma += (tam-cont);
            if(flag){
                soma += tam;
                contador++;
            }
        }
        int media;
        if(soma != 0)
            media = soma / contador;
        else
            media = 0;

        if(media <= 3)
            cout << 250 << endl;
        else if(media <= 5)
            cout << 500 << endl;
        else
            cout << 1000 << endl;
    }

    return 0;
}