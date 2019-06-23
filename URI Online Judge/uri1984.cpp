#include<iostream>
#include<string>
using namespace std;
int main() 
{
	string num,inv;
	cin>>num;
	for(int i=num.size()-1;i>=0;i--)
	{
		inv+=num[i];
	}
	cout<<inv<<endl;
	return 0;
}