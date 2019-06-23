#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	while(cin>>n)
	{
		while(n<3 || n>69)
		{
			cin>>n;
		}
		int m[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				m[i][j]=0;
			}
		}
		for(i=0,j=0;i<n;i++,j++)
		{
			m[i][j]=1;
		}
		for(i=0,j=n-1;i<n;i++,j--)
		{
			m[i][j]=2;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j>i && i<(n-(j+1)))
				{
					m[i][j]=3;
				}
				if(j<i && i>(n-(j+1)))
				{
					m[i][j]=3;
				}
				if(j<i && i<(n-(j+1)))
				{
					m[i][j]=3;
				}
				if(j>i && i>(n-(j+1)))
				{
					m[i][j]=3;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<m[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}