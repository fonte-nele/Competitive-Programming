#include <iostream>
using namespace std;

int main()
{
    int n, i, j, cnt=0;
    while(cin >> n)
    {
        int num = 1;
        cnt++;
        num += ((n*(n + 1)) / 2);
        if(n == 0)
        {
        	cout << "Caso " << cnt<< ": " << num <<" numero\n";
        }
        else
        {
        	cout << "Caso "<<cnt<<": "<<num<<" numeros\n";
        }
        cout << 0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                cout<<" "<< i;
            }
        }
        cout << "\n\n";
    }
    return 0;
}