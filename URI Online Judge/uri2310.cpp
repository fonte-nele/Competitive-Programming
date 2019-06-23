#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int i, quant, saque1, saque2, bloqueio1, bloqueio2, ataque1, ataque2, soma1 = 0, soma2 = 0, soma3 = 0, total1 = 0, total2 = 0, total3 = 0;
    string nome;

    cin >> quant;
    
    for(i = 0; i < quant; i++)
    {
    	cin >> nome;
    	cin >> saque1 >> bloqueio1 >> ataque1;
    	cin >> saque2 >> bloqueio2 >> ataque2;

    	soma1 += saque1;
    	soma2 += bloqueio1;
    	soma3 += ataque1;

    	total1 += saque2;
    	total2 += bloqueio2;
    	total3 += ataque2;
    }
    cout << "Pontos de Saque: " << fixed << setprecision(2) << ((double)total1 / soma1)*100.00 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << ((double)total2 / soma2)*100.00 << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << ((double)total3 / soma3)*100.00 << " %." << endl;
    
    return 0;
}