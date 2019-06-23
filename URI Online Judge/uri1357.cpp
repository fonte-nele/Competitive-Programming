/*input
8 3
xxxxxxxx
3 3
3 4
3 7
11 3
xooxoxxxxox
5 6
10 43
9 1000
0 0
*/

// URI 1622 - Lâmpadas
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

int sz;
string input;
char b[3][310];
char braille[10][6] = { {'.','*','*','*','.','.'}, {'*','.','.','.','.','.'}, {'*','.','*','.','.','.'}, {'*','*','.','.','.','.'}, {'*','*','.','*','.','.'}, {'*','.','.','*','.','.'}, {'*','*','*','.','.','.'}, {'*','*','*','*','.','.'}, {'*','.','*','*','.','.'}, {'.','*','*','.','.','.'}};

void dec2Bra(int d) 
{
    getline(cin, input);
    sz = input.length();

    f(0, 3){
        fr(0, sz)
        {
            if (j > 0) 
                cout << " ";
            cout << braille[input[j]-'0'][2*i] << braille[input[j]-'0'][2*i+1];
        }
        cout << endl;
    }
}

void bra2Dec(int d)
{
    f(0, 3)
    {
        getline(cin, input);
        sz = input.length();
      
        for (int j = 0; j < sz; j += 3)
            b[i][j*2/3] = input[j], b[i][j*2/3+1] = input[j+1];
    }

    f(0, d)
    {
        fr(0, 10)
        {
            if (braille[j][0] == b[0][i*2] && braille[j][1] == b[0][i*2+1] && braille[j][2] == b[1][i*2] && braille[j][3] == b[1][i*2+1] && braille[j][4] == b[2][i*2] && braille[j][5] == b[2][i*2+1]) {
                cout << j;
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;
    char c;

    while(cin >> d && d){
        
        cin >> c;
        getline(cin, input);
        //getchar();
        //cout << "C = " << c << endl;
        if(c == 'S')
            dec2Bra(d);
        else
            bra2Dec(d);
    }

    return 0;
}