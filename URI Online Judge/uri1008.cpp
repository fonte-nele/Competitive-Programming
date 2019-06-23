#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int num,horas;
    double valor,total;

    cin >> num >> horas >> valor;
    
    total = valor * horas;
    
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ "<< fixed << setprecision(2) << total << endl;
    
    return 0;
}