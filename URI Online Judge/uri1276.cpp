/*input
aha
xyzzy
quick brown fox jumps over the lazy dog
fbxeac
  x 
 b z a x c y
bdfhjlnprtvxz

az def
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

int posicao(char a)
{
    if(a == 'a')
        return 0;
    else if(a == 'b')
        return 1;
    else if(a == 'c')
        return 2;
    else if(a == 'd')
        return 3;
    else if(a == 'e')
        return 4;
    else if(a == 'f')
        return 5;
    else if(a == 'g')
        return 6;
    else if(a == 'h')
        return 7;
    else if(a == 'i')
        return 8;
    else if(a == 'j')
        return 9;
    else if(a == 'k')
        return 10;
    else if(a == 'l')
        return 11;
    else if(a == 'm')
        return 12;
    else if(a == 'n')
        return 13;
    else if(a == 'o')
        return 14;
    else if(a == 'p')
        return 15;
    else if(a == 'q')
        return 16;
    else if(a == 'r')
        return 17;
    else if(a == 's')
        return 18;
    else if(a == 't')
        return 19;
    else if(a == 'u')
        return 20;
    else if(a == 'v')
        return 21;
    else if(a == 'w')
        return 22;
    else if(a == 'x')
        return 23;
    else if(a == 'y')
        return 24;
    else if(a == 'z')
        return 25;
    return 0;
}

char numero(int a)
{
    if(a == 0)
        return 'a';
    else if(a == 1)
        return 'b';
    else if(a == 2)
        return 'c';
    else if(a == 3)
        return 'd';
    else if(a == 4)
        return 'e';
    else if(a == 5)
        return 'f';
    else if(a == 6)
        return 'g';
    else if(a == 7)
        return 'h';
    else if(a == 8)
        return 'i';
    else if(a == 9)
        return 'j';
    else if(a == 10)
        return 'k';
    else if(a == 11)
        return 'l';
    else if(a == 12)
        return 'm';
    else if(a == 13)
        return 'n';
    else if(a == 14)
        return 'o';
    else if(a == 15)
        return 'p';
    else if(a == 16)
        return 'q';
    else if(a == 17)
        return 'r';
    else if(a == 18)
        return 's';
    else if(a == 19)
        return 't';
    else if(a == 20)
        return 'u';
    else if(a == 21)
        return 'v';
    else if(a == 22)
        return 'w';
    else if(a == 23)
        return 'x';
    else if(a == 24)
        return 'y';
    else if(a == 25)
        return 'z';
    return '0';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string pal;

    while(getline(cin, pal))
    {
        //cout << "PAL=" << pal << endl;
        vector<int> v(26);

        int pos, tam = (int)pal.size(), cont = 0;
        f(0, tam){
            if(pal[i] >= 'a' && pal[i] <= 'z')
            {
                pos = posicao(pal[i]);
                v[pos]++;
            }
        }
        char ant = '0', fim;
        f(0, 26)
        {
            //cout << v[i] << endl;
            if(v[i] != 0 && ant == '0'){
                ant = numero(i);
                if(i == 25)
                {
                    if(cont == 0){
                        cout << ant << ":" << ant;
                    }
                    else{
                        cout << ", "<< ant << ":" << ant;
                    }
                    cont++;
                }
            }
            else if(v[i] == 0 && ant != '0')
            {
                fim = numero(i-1);
                if(cont == 0){
                    cout << ant << ":" << fim;
                }
                else{
                    cout << ", "<< ant << ":" << fim;
                }
                ant = '0';
                cont++;
            }
            else if(i == 25 && ant != '0')
            {
                fim = numero(i);
                if(cont == 0){
                    cout << ant << ":" << fim;
                }
                else{
                    cout << ", "<< ant << ":" << fim;
                }
                cont++;
            }
        }
        cout << endl;

    }

    return 0;
}