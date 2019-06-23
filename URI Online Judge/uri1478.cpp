#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	while(n!=0)
	{
		int m[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				{
					m[i][j]=1;
				}
				if(i>j)
				{
					m[i][j]=(i-j)+1;
				}
				if(i<j)
				{
					m[i][j]=(j-i)+1;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j!=(n-1))
				{
					cout<<setw(3)<<m[i][j]<<" ";
				}
				else
				{
					cout<<setw(3)<<m[i][j];
				}
			}
			cout<<endl;
		}
		cout<<endl;
		cin>>n;
	}
	
	return 0;
}