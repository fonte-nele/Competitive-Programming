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
		int num=1,inicio=0,fim=n;
		for(i=0;i<(n+1)/2;i++)
		{
			for(j=inicio;j<fim;j++)
			{
				m[j][inicio]=num;
				m[inicio][j]=num;
				m[j][fim-1]=num;
				m[fim-1][j]=num;
			}
			num++;
			inicio++;
			fim--;
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