#include <iostream>
#include<cmath>
using namespace std;
 
int main() 
{
    int A,B,C,maior1,maior_total;
    cin>>A>>B>>C;
    maior1 = (A+B+abs(A-B))/2;
    maior_total = (maior1+C+abs(maior1-C))/2;
    cout<<maior_total<<" eh o maior"<<endl;
    return 0;
}