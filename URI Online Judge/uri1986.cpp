/*input
7
73 6F 63 6F 72 72 6F
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
    int n;
    string pal;

    cin >> n;
    f(0, n)
    {
        cin >> pal;
        if(pal == "61")
            cout << 'a';
        else if(pal == "62")
            cout << 'b';
        else if(pal == "63")
            cout << 'c';
        else if(pal == "64")
            cout << 'd';
        else if(pal == "65")
            cout << 'e';
        else if(pal == "66")
            cout << 'f';
        else if(pal == "67")
            cout << 'g';
        else if(pal == "68")
            cout << 'h';
        else if(pal == "69")
            cout << 'i';
        else if(pal == "6A")
            cout << 'j';
        else if(pal == "6B")
            cout << 'k';
        else if(pal == "6C")
            cout << 'l';
        else if(pal == "6D")
            cout << 'm';
        else if(pal == "6E")
            cout << 'n';
        else if(pal == "6F")
            cout << 'o';
        else if(pal == "70")
            cout << 'p';
        else if(pal == "71")
            cout << 'q';
        else if(pal == "72")
            cout << 'r';
        else if(pal == "73")
            cout << 's';
        else if(pal == "74")
            cout << 't';
        else if(pal == "75")
            cout << 'u';
        else if(pal == "76")
            cout << 'v';
        else if(pal == "77")
            cout << 'w';
        else if(pal == "78")
            cout << 'x';
        else if(pal == "79")
            cout << 'y';
        else if(pal == "7A")
            cout << 'z';        
    }
    cout << endl;
    return 0;
}