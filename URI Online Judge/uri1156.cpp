#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double j,i,soma = 0;
    j=1;
    for(i=1; i<=39;i+=2)
	{
		soma = soma + (i/j);
		j*=2;
    }
    cout<<fixed<<setprecision(2)<<soma<<endl;
    return 0;
}