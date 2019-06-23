#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j;
	int n;
	
	cin>>n;
	while(n>0)
	{
		long int valor=1,temp=1;
		long int m[n][n];

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				m[i][j]=temp*valor;
				valor*=2;
			}
			valor=1;
			temp*=2;
		}
		int cont=0, maior = m[n-1][n-1];
		while(maior>0)
		{
			maior/=10;
			cont++;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				int atual=m[i][j];
				int cont2=0,k,flag=0;
				while(atual/=10)
				{
					cont2++;
				}
				if(j!=0)
				{
					for(k=0;k<cont-cont2;k++)
					{
						cout<<" ";
					}
				}
				else
				{
					cout<<setw(cont)<<m[i][j];
					flag++;
				}
				if(flag==0)
				{
					cout<<m[i][j];
				}
			}
			cout<<endl;
		}
		cout<<endl;
		cin>>n;
	}
	return 0;
}