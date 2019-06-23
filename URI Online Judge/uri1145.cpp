#include<iostream>
using namespace std;
int main()
{
	int i,j,n,n2,aux=1;
	cin>>n>>n2;
	for(i=0;i<n2;i+=n)
	{
		for(j=0;j<n;j++)
		{
			if(aux<=n2)
			{
				cout<<aux;
				if(j!=(n-1) && aux!=n2)
				{
					cout<<" ";
				}
				else
				{
					if(aux!=n2)
					{
						cout<<endl;
					}
				}
				aux++;
			}
		}
	}
	cout<<endl;
	return 0;
}