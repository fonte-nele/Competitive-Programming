#include<iostream>
using namespace std;
int main()
{
	int i,n,temp;
	cin>>n;
	for(i=1;i<(n*3)+n;i+=4)
	{
		temp=i;
		cout<<temp<<" "<<temp+1<<" "<<temp+2<<" PUM"<<endl;
	}
	return 0;
}