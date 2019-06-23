#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
int main() 
{
    string nome;
    double salario, montante, total, porc;

    cin >> nome >> salario >> montante;
    
    porc = (montante/100)*15;
    total = salario + porc;
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
    
    return 0;
}