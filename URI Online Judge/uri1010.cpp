#include <iostream>
#include<iomanip>
using namespace std;
 
int main() 
{
    int cod1,num1,cod2,num2;
    double valor1,valor2,total;
    cin>>cod1>>num1>>valor1>>cod2>>num2>>valor2;
    total = (num1*valor1)+(num2*valor2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}