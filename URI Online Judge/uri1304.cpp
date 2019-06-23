/*input
00:00:01 100
00:15:01
00:30:01
01:00:01 50
03:00:01
03:00:05 140
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
    int tam, cont = 1;
    string tempo, aux;
    double dist = 0.0, inicio = 0.0, fim = 0.0, vel;

    while(getline(cin, tempo))
    {
        tam = (int)tempo.size();

        if(tam == 8){
            aux = tempo.substr(0, 2);
            fim = (atoi(aux.c_str()) * 3600);
            aux = tempo.substr(3, 2);
            fim += (atoi(aux.c_str()) * 60);
            aux = tempo.substr(6, 2);
            fim += atoi(aux.c_str());
            dist += (((fim-inicio)*vel)/3600);
            //cout << "Inicio " << inicio << " Fim " << fim << endl;
            inicio = fim;
            //fim = 0.0;
            cout << tempo << " " << fixed << setprecision(2) << dist << " km" << endl;
        }
        else{
            if(cont == 1)
            {
                aux = tempo.substr(0, 2);
                inicio = (atoi(aux.c_str()) * 3600);
                aux = tempo.substr(3, 2);
                inicio += (atoi(aux.c_str()) * 60);
                aux = tempo.substr(6, 2);
                inicio += atoi(aux.c_str());
                aux = tempo.substr(9, tam-9);
                vel = atoi(aux.c_str());
                //cout << vel << endl;
            }
            else{
                aux = tempo.substr(0, 2);
                fim = (atoi(aux.c_str()) * 3600);
                aux = tempo.substr(3, 2);
                fim += (atoi(aux.c_str()) * 60);
                aux = tempo.substr(6, 2);
                fim += atoi(aux.c_str());
                dist += (((fim-inicio)*vel)/3600);
                //cout << "Inicio1 " << inicio << " Fim1 " << fim << endl;
                inicio = fim;
                aux = tempo.substr(9, tam-9);
                vel = atoi(aux.c_str());
                //fim = 0.0;
                //cout << tempo << " " << fixed << setprecision(2) << dist << " km" << endl;
            }
            cont++;
        }
    }

    return 0;
}