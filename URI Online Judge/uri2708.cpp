#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i = 0, quant, cont = 0;
    string pal;

    do
    {
        cin >> pal >> quant;
        if(pal == "SALIDA")
            i++, cont += quant;
        else if(pal == "VUELTA")
            i--, cont -= quant;

        
    }while(pal != "ABEND");
    cout << cont << endl;
    cout << i << endl; 
    
    return 0;
}