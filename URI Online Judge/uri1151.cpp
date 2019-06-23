#include<iostream>
using namespace std;
int main()
{
    int num,i,atual,ant1=1,ant2=0;
    cin>>num;
	while(num>=46 || num<0)
	{
		cin>>num;
	}
    cout<<ant2<<" "<<ant1<<" ";
    for(i=3; i<=num;i++)
    {
        atual = ant1+ant2;
        cout<<atual;
		if(i!=num)
		{
			cout<<" ";
		}
        ant2 = ant1;
        ant1 = atual;
    }
	cout<<endl;
    return 0;
}