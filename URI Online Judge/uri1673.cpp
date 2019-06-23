#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string tex;
    while(getline(cin, tex)){
        int pos = 0;
        while(pos < tex.size()){
            if(tex[pos] == tex[pos + 1])
            {
                int cont = 1;
                char letra = tex[pos];
 
                while(tex[pos] == tex[pos + 1] && pos + 1 < tex.size() && cont < 9){
                    cont++;
                    pos++;
                }
 
                cout << cont << letra;
            }
            else
            {
                int ini = pos;
                while(tex[pos] != tex[pos + 1] && pos + 1 < tex.size())
                    pos++;
                if(pos + 1 >= tex.size()) // Pra tratar o ultimo caso
                    pos++;
 
                string tmp = tex.substr(ini, pos - ini);
                cout << "1";
                f(0, tmp.size())
                    cout << (tmp[i] == '1' ? "11" : tmp.substr(i, 1)); // Se for "1" imprime "11"
                cout << "1";
                pos--;
            }
 
            pos++;
        }
        cout << endl;
    }

    return 0;
}