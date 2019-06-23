#include<iostream>
using namespace std;
int main()
{
	int v[1200],n,i,j,cont=0;
	cin>>n;
	while(n<2 || n>50)
	{
		cin>>n;
	}
	for(i=0;i<(1000/n)+1;i++)
	{
		for(j=0;j<n;j++,cont++)
		{
			v[cont]=j;
		}
	}
	
	for(i=0;i<1000;i++)
	{
		cout<<"N["<<i<<"] = "<<v[i]<<endl;
	}
	return 0;
}