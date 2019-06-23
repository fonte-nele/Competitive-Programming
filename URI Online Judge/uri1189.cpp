#include<iostream>
#include<iomanip>
#define n 12	
using namespace std;
int main()
{
	int i,j;
	double m[n][n],soma=0,media=0;
	char pos;
	cin>>pos;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<i && i<(n-(j+1)))
			{
				soma+=m[i][j];
				media++;
			}	
		}
	}
	if(pos=='S')
	{
		cout<<fixed<<setprecision(1)<<soma<<endl;
	}
	else
	{
		if(pos=='M')
		{
			cout<<fixed<<setprecision(1)<<soma/media<<endl;
		}
	}
	return 0;
}