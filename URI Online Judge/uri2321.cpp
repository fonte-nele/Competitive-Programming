#include <iostream>
using namespace std;

int main () 
{
    int i, ret1[4], ret2[4];

   	for(i = 0; i < 4; i++)
   	{
   		cin >> ret1[i];
   	}
   	for(i = 0; i < 4; i++)
   	{
   		cin >> ret2[i];
   	}

	if(ret1[0] > ret2[2] || ret2[0] > ret1[2] || ret1[2] < ret2[0] || ret2[2] < ret1[0])
		cout << 0 << endl;
	else
		cout << 1 << endl;

    return 0;
}