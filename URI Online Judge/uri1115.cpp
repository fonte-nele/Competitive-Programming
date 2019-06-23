#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(a!=0 && b!=0)
	{
		cin>>a>>b;
		if(a>0 && b>0)
		{
			cout<<"primeiro"<<endl;
		}
		else
		{
			if(a>0 && b<0)
			{
				cout<<"quarto"<<endl;
			}
			else
			{
				if(a<0 && b>0)
				{
					cout<<"segundo"<<endl;
				}
				else
				{
					if(a<0 && b<0)
					{
						cout<<"terceiro"<<endl;
					}
				}
			}
		}
	}
	
	return 0;
}