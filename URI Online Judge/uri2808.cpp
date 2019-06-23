#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pos1, pos2;

    cin >> pos1 >> pos2;

    int aux, aux2, m[8][8];

    memset(m, 0, sizeof(m));

    if(pos1[0] == 'a')
        aux = 0;
    else if(pos1[0] == 'b')
        aux = 1;
    else if(pos1[0] == 'c')
        aux = 2;
    else if(pos1[0] == 'd')
        aux = 3;
    else if(pos1[0] == 'e')
        aux = 4;
    else if(pos1[0] == 'f')
        aux = 5;
    else if(pos1[0] == 'g')
        aux = 6;
    else if(pos1[0] == 'h')
        aux = 7;

    aux2 = pos1[1] -49;

    //cout << aux << aux2 <<endl;
    if(aux2 + 2 < 8 && aux+1 <8)
        m[aux2+2][aux+1] = 1;
    if(aux2 + 1 < 8 && aux+2 <8)
        m[aux2+1][aux+2] = 1;
    if(aux2 -1 >= 0 && aux+2 < 8)
        m[aux2-1][aux+2] = 1;
    if(aux2 - 2 >= 0 && aux+1 <8)
        m[aux2-2][aux+1] = 1;
    if(aux2 - 2 >= 0 && aux-1 >=0)
        m[aux2-2][aux-1] = 1;
    if(aux2 - 1 >= 0 && aux-2 >=0)
        m[aux2-1][aux-2] = 1;
    if(aux2 + 1 < 8 && aux-2 >=0)
        m[aux2+1][aux-2] = 1;
    if(aux2 + 2 < 8 && aux-1 >=0)
        m[aux2+2][aux-1] = 1;
    /*for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }*/
    
    if(pos2[0] == 'a')
        aux = 0;
    else if(pos2[0] == 'b')
        aux = 1;
    else if(pos2[0] == 'c')
        aux = 2;
    else if(pos2[0] == 'd')
        aux = 3;
    else if(pos2[0] == 'e')
        aux = 4;
    else if(pos2[0] == 'f')
        aux = 5;
    else if(pos2[0] == 'g')
        aux = 6;
    else if(pos2[0] == 'h')
        aux = 7;

    aux2 = pos2[1] -49;

    if(m[aux2][aux])
        cout << "VALIDO" << endl;
    else
        cout << "INVALIDO" << endl;
    return 0;
}