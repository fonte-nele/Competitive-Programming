/*input
4 9 2
3 0 7
8 1 6
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
    int mat[3][3], soma = 0, pos = 0;
    vector<int> v1(3);
    vector<int> v2(3);
    
    f(0, 3)
    {
        fr(0, 3)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 0)
            {
                v1[pos] = i;
                v2[pos] = j;
                pos++;
            }
        }
    }
    
    f(0, 3)
        if( (mat[i][0] == 0) + (mat[i][1] == 0) + (mat[i][2] == 0) == 0 )
            soma = mat[i][0] + mat[i][1] + mat[i][2];

    fr(0, 3)
        if( (mat[0][j] == 0) + (mat[1][j] == 0) + (mat[2][j] == 0) == 0 )
            soma = mat[0][j] + mat[1][j] + mat[2][j];

    if( (mat[0][0] == 0) + (mat[1][1] == 0) + (mat[2][2] == 0) == 0 )
        soma = mat[0][0] + mat[1][1] + mat[2][2];

    if( (mat[0][2] == 0) + (mat[1][1] == 0) + (mat[2][0] == 0) == 0)
        soma = mat[0][2] + mat[1][1] + mat[2][0];

    if( soma == 0 )
    {
        f(0, 3)
            fr(0, 3)
                soma += mat[i][j];
        soma /= 2;
    }

    //cout << soma << endl;
    /*f(0, pos){
        //cout << v1[i] << " " << v2[i] << endl;
        if(v1[i] == 0 && v2[i] == 0){
            if(mat[0][1] != 0 && mat[0][2] != 0)
                mat[0][0] = soma - (mat[0][1] + mat[0][2]);
            else if(mat[1][0] != 0 && mat[2][0] != 0)
                mat[0][0] = soma - (mat[1][0] + mat[2][0]);
            else
                mat[0][0] = soma - (mat[1][1] + mat[2][2]);
        }
        else if(v1[i] == 0 && v2[i] == 1)
        {
            if(mat[0][0] != 0 && mat[0][2] != 0)
                mat[0][1] = soma - (mat[0][0] + mat[0][2]);
            else
                mat[0][1] = soma - (mat[1][1] + mat[2][1]);
        }
        else if(v1[i] == 0 && v2[i] == 2)
        {
            if(mat[0][0] != 0 && mat[0][1] != 0)
                mat[0][2] = soma - (mat[0][0] + mat[0][1]);
            else if(mat[1][2] != 0 && mat[2][2] != 0)
                mat[0][2] = soma - (mat[1][2] + mat[2][2]);
            else
                mat[0][2] = soma - (mat[1][1] + mat[2][0]);
        }
        else if(v1[i] == 1 && v2[i] == 0)
        {
            if(mat[0][0] != 0 && mat[2][0] != 0)
                mat[1][0] = soma - (mat[0][0] + mat[2][0]);
            else
                mat[1][0] = soma - (mat[1][1] + mat[1][2]);
        }
        else if(v1[i] == 1 && v2[i] == 1)
        {
            if(mat[1][0] != 0 && mat[1][2] != 0)
                mat[1][1] = soma - (mat[1][0] + mat[1][2]);
            else if(mat[0][1] != 0 && mat[2][1] != 0)
                mat[1][1] = soma - (mat[0][1] + mat[2][1]);
            else if(mat[0][0] != 0 && mat[2][2] != 0)
                mat[1][1] = soma - (mat[0][0] + mat[2][2]);
            else
                mat[1][1] = soma - (mat[0][2] + mat[2][0]);
        }
        else if(v1[i] == 1 && v2[i] == 2)
        {
            if(mat[0][2] != 0 && mat[2][2] != 0)
                mat[1][2] = soma - (mat[0][2] + mat[2][2]);
            else
                mat[1][2] = soma - (mat[0][0] + mat[1][1]);
        }
        else if(v1[i] == 2 && v2[i] == 0)
        {
            if(mat[2][1] != 0 && mat[2][2] != 0)
                mat[2][0] = soma - (mat[2][1] + mat[2][2]);
            else if(mat[0][0] != 0 && mat[1][0] != 0)
                mat[2][0] = soma - (mat[0][0] + mat[1][0]);
            else
                mat[2][0] = soma - (mat[1][1] + mat[0][2]);
        }
        else if(v1[i] == 2 && v2[i] == 1)
        {
            if(mat[2][0] != 0 && mat[2][2] != 0)
                mat[2][1] = soma - (mat[2][0] + mat[2][2]);
            else
                mat[2][1] = soma - (mat[0][0] + mat[1][1]);
        }
        else
        {  
            if(mat[2][0] != 0 && mat[2][1] != 0)
                mat[2][2] = soma - (mat[2][0] + mat[2][1]);
            else if(mat[0][2] != 0 && mat[1][2] != 0)
                mat[2][2] = soma - (mat[0][2] + mat[1][2]);
            else
                mat[2][2] = soma - (mat[0][0] + mat[1][1]);
        }
    }*/
    for(int tentativas = 0; tentativas < 3; tentativas++) 
    {
        f(0, 3)
            fr(0, 3) 
            {
                /*Testa mesma linha*/
                if( (mat[i][j] == 0) && (mat[i][0] == 0) + 
                (mat[i][1] == 0) + (mat[i][2] == 0) == 1 )
                    mat[i][j] = soma - mat[i][0] - mat[i][1] - mat[i][2];
                
                /*Testa mesma coluna*/
                if( (mat[i][j] == 0) && (mat[0][j] == 0) + 
                (mat[1][j] == 0) + (mat[2][j] == 0) == 1 )
                    mat[i][j] = soma - mat[0][j] - mat[1][j] - mat[2][j];
            }
    }
    f(0, 3)
    {
        fr(0, 3)
        {
            if(j == 0)
                cout << mat[i][j];
            else
                cout << " " << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}