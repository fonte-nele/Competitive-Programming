#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num1, num2, soma;
    cin >> n >> num1 >> num2;
    soma = num1 + num2;

    if(soma > n)
    	cout << "Deixa para amanha!" << endl;
    else
    	cout << "Farei hoje!" << endl;
    /*do
    {
        cin >> pal >> quant;
        if(pal == "SALIDA")
            i++, cont += quant;
        else if(pal == "VUELTA")
            i--, cont -= quant;

        
    }while(pal != "ABEND");
    cout << cont << endl;
    cout << i << endl; */
    
    return 0;
}