#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () 
{
    string nome;
    int dist, soma = 0, quant = 0;
    while(getline(cin,nome))
    {
        cin >> dist;
        getline(cin, nome);
        soma += dist;
        quant ++;
    }
    
    cout << fixed << setprecision(1) << (double)soma/quant << endl;
    return 0;
}