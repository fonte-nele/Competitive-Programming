#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,n,tam;
	cin>>n;
	string pal,v[35];
	pal = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	tam = pal.size();
	for(i=0;i<=tam;i++)
	{
		v[i]=pal[i];
	}
	i=0;
	while(i<n)
	{
		cout<<v[i];
		i++;
	}
	cout<<endl;
	return 0;
}