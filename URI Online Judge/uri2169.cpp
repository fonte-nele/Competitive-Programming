/*input
3
MATILDA 14
STRIKER 99
HANDCANNON 67
2
ELGIGANTE 5
GATLINGMAN 9
575
1
STRIKER 77
1
GATLINGMAN 9
375
5
HANDGUN 3
RIFLE 83
BLACKTAIL 20
TMP 14
HANDCANNON 75
8
REGENERATOR 2
COBRAS 2
GARRADOR 9
ELGIGANTE 2
GATLINGMAN 9
ZEALOT 1
DR.SALVADOR 7
COLMILLOS 5
480
*/

// URI 2169 - Ajude o Leonardo!
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
#define pi 3.1415926535897
#define MAX 305
#define endl "\n"
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

long long mochila(int W, int wt[], int val[], int n){ 
    long long i, w; 
    long long K[n+1][W+1]; 
  
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i==0 || w==0) 
                K[i][w] = 0; 
            else if (wt[i-1] <= w) 
                K[i][w] = max(val[i-1]*wt[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]); 
            else
                K[i][w] = K[i-1][w]; 
        }  
    } 

    /*for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            cout << K[i][w] << " "; 
        } 
        cout << endl;
    } */
    return K[n][W]; 
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int qa, qb, m;
    string montros, armas;

    while(cin >> qa){
        int preco[qa], peso[qa];
        long long total = 0, poder;

        f(0, qa){
            cin >> armas >> poder;
            if(armas == "HANDGUN" || armas == "MATILDA"){
                preco[i] = 20;
                peso[i] = poder;
            }else if(armas == "RED9" || armas == "BLACKTAIL"){
                preco[i] = 35;
                peso[i] = poder;
            }else if(armas == "STRIKER" || armas == "RIFLE"){
                preco[i] = 120;
                peso[i] = poder;
            }else if(armas == "TMP"){
                preco[i] = 12;
                peso[i] = poder;
            }else if(armas == "HANDCANNON"){
                preco[i] = 600;
                peso[i] = poder;
            }
        }
        cin >> qb;

        f(0, qb){
            cin >> montros >> poder;
            if(montros == "GANADOS")
                total += 500 * poder;
            else if(montros == "COBRAS")
                total += 400 * poder;
            else if(montros == "ZEALOT")
                total += 750 * poder;
            else if(montros == "COLMILLOS")
                total += 600 * poder;
            else if(montros == "GARRADOR")
                total += 1250 * poder;
            else if(montros == "LASPLAGAS")
                total += 1000 * poder;
            else if(montros == "GATLINGMAN")
                total += 1500 * poder;
            else if(montros == "REGENERATOR")
                total += 2500 * poder;
            else if(montros == "ELGIGANTE")
                total += 5000 * poder;
            else if(montros == "DR.SALVADOR")
                total += 3500 * poder;
        }
        cin >> m;

        long long valor = mochila(m, peso, preco, qa);

        //cout << "Valor = " << valor << endl;
        //cout << "Total = " << total << endl;
        if(valor >= total){
            cout << "Missao completada com sucesso" << endl;
        }else{
            cout << "You Are Dead" << endl;
        }
        cout << endl;
    }

    return 0;
}