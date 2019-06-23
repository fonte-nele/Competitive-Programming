#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,n;
	while(cin>>n)
	{
		int m[n+1][n+1];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==j)
				{
					m[i][j]=2;
				}
				else
				{
					m[i][j]=0;
				}
			}
		}
		for(i=1,j=n;i<=n;i++,j--)
		{
			m[i][j]=3;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i>(n/3) && i<=n-n/3 && j>(n/3) &&j<=n-n/3)
				{
					m[i][j]=1;
				}
				if(i==j && i==1+(n/2))
				{
					m[i][j]=4;
				}
			}
		}
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cout<<m[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}