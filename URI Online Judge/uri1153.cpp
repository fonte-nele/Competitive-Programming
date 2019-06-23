#include<iostream>
using namespace std;
int main()
{
    int fat=1,num,i;
    cin>>num;
	while(num<0 || num>=13)
	{
		cin>>num;
	}
    for(i=2;i<=num;i++)
    {
        fat=fat * i;
    }
    cout<<fat<<endl;
    return 0;
}
