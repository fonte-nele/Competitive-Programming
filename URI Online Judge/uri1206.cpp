/*input
4
Tc3 Te4 Bf4 Wa8
Wd1
5
Wb5 Pf3 Rh7 Te1 Tg1
Wh1
4
Wa8 Ta1 Ta3 Rd2
We2
*/

// URI 1206 - Desafio de São Petersburgo
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

char mesa[8][8];

bool ACIMA(int x, int y){
 
    if (y == 0)
        return false;
    
    int i;
 
    for (i = y-1; i >= 0; i--) {                            
        switch (mesa[x][i]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return true;
            case 'B':
                return false;
            case 'P':
                return false;
            case 'W':
                if (i == y-1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}
 
bool ABAIXO(int x, int y){
 
    if (y == 7)
        return false;
    
    int i;
 
    for (i = y+1; i <= 7; i++) {                            
        switch (mesa[x][i]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return true;
            case 'B':
                return false;
            case 'P':
                return false;
            case 'W':
                if (i == y+1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}
 
bool DIREITA(int x, int y){
 
    if (x == 7)
        return false;
    
    int i;
 
    for (i = x+1; i <= 7; i++) {                            
        switch (mesa[i][y]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return true;
            case 'B':
                return false;
            case 'P':
                return false;
            case 'W':
                if (i == x+1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}
 
bool ESQUERDA(int x, int y){
 
    if (x == 0)
        return false;
    
    int i;
 
    for (i = x-1; i >= 0; i--) {                            
        switch (mesa[i][y]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return true;
            case 'B':
                return false;
            case 'P':
                return false;
            case 'W':
                if (i == y-1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}
 
bool DIAG_1(int x, int y){
 
    if (x == 0 || y == 0)
        return false;
    
    int i,j;
 
    for (i = x-1,j = y-1; i >= 0 && j >= 0; i--,j--) {                          
        switch (mesa[i][j]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return false;
            case 'B':
                return true;
            case 'P':
                return false;
            case 'W':
                if (j == y-1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}
 
bool DIAG_2(int x, int y){
 
    if (x == 7 || y == 0)
        return false;
    
    int i,j;
 
    for (i = x+1,j = y-1; i <= 7 && j >= 0; i++,j--) {
        switch (mesa[i][j]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return false;
            case 'B':
                return true;
            case 'P':
                return false;
            case 'W':
                if (j == y-1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}
 
bool DIAG_3(int x, int y){
 
    if (x == 0 || y == 7)
        return false;
    
    int i,j;
 
    for (i = x-1,j = y+1; i >= 0 && j <= 7; i--,j++) {
        switch (mesa[i][j]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return false;
            case 'B':
                return true;
            case 'P':
                if (j == y+1)
                    return true;
                else
                    return false;
            case 'W':
                if (j == y+1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}
 
bool DIAG_4(int x, int y){
 
    if (x == 7 || y == 7)
        return false;
    
    int i,j;
 
    for (i = x+1,j = y+1; i <= 7 && j <= 7; i++,j++) {
        switch (mesa[i][j]) {
            case 0:
                break;
            case 'R':
                return true;
            case 'T':
                return false;
            case 'B':
                return true;
            case 'P':
                if (j == y+1)
                    return true;
                else
                    return false;
            case 'W':
                if (j == y+1)
                    return true;
                else
                    return false;
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, reiX, reiY;
    bool flag, xequeMate;
    string leitura;

    while(cin >> n)
    {
        flag =  xequeMate = false;

        memset(mesa, 0, sizeof (mesa));

        f(0, n){
            cin >> leitura;
            mesa[leitura[1] - 'a'][leitura[2] - '1'] = leitura[0];
        }

        cin >> leitura;
        reiX = leitura[1] - 'a';
        reiY = leitura[2] - '1';
        //cout << leitura << endl;

        f(reiX-1, reiX+2){
            if(flag)
                break;
            if(i >= 0 && i <= 7){
                fr(reiY-1, reiY+2){
                    if(j >= 0 && j <= 7){
                        if (ACIMA(i,j)) 
                            xequeMate = true;
                        else if (ABAIXO(i,j)) 
                            xequeMate = true;
                        else if (DIREITA(i,j)) 
                            xequeMate = true;
                        else if (ESQUERDA(i,j)) 
                            xequeMate = true;
                        else if (DIAG_1(i,j)) 
                            xequeMate = true;
                        else if (DIAG_2(i,j)) 
                            xequeMate = true;
                        else if (DIAG_3(i,j)) 
                            xequeMate = true;
                        else if (DIAG_4(i,j) ) 
                            xequeMate = true;
                        else {
                            xequeMate = false;
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }
        cout << (xequeMate == true ? "SIM" : "NAO") << endl; 
    }

    return 0;
}