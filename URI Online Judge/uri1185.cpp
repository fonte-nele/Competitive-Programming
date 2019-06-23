#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j;
	double m[12][12],soma=0,media=0;
	char pos;
	cin>>pos;
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			cin>>m[i][j];
		}
	}
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			if(i<12-(j+1))
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