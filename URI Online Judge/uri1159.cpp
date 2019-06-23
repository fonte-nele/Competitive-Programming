#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main()
{
	int j,num1,soma=0;
	cin>>num1;
	while(num1!=0)
	{
		for(j=num1;j<(num1+10);j++)
		{
			if(j%2==0)
			{
				soma+=j;
			}
		}
		cout<<soma<<endl;
		soma=0;
		cin>>num1;
	}
	
	return 0;
}