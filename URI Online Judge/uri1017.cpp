#include <iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    int tempo,velocidade;
    double litros;
    cin>>tempo>>velocidade;
    litros = (tempo*velocidade)/12.0;
    cout<<fixed<<setprecision(3)<<litros<<endl;
    return 0;
}