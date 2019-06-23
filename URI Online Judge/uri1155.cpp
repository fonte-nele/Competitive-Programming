#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double i,h=0;
    for(i=1;i<=100;i++)
    {
		h = h +(1/i);
    }
    cout<<fixed<<setprecision(2)<<h<<endl;
    return 0;
}