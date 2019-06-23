#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant, r, g, b, valor, cont = 1;
    string nome;

    cin >> quant;
    
    while(quant--) 
    {
        cin >> nome >> r >> g >> b;

        if(nome == "min"){
            valor = min(r,min(g,b));
        }else if(nome == "max"){
            valor = max(r,max(g,b));
        }else if(nome == "mean"){
            valor = (r+g+b)/3;
        }else if(nome == "eye"){
            valor = 0.3*r + 0.59*g + 0.11*b;
        }

        cout << "Caso #" << cont << ": " << valor << endl;
        cont++;
    }
    
    return 0;
}