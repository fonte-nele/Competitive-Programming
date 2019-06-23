#include <iostream>
 
using namespace std;
 
int main()
{
    int idade,cont1=0,cont2=0;
    cin>>idade;
    
    while(idade>29)
    {
        if(idade>365)
        {
            idade-=365;
            cont1++;
        }
        else
        {
            idade-=30;
            cont2++;
        }
    }
    cout<<cont1<<" ano(s)"<<endl;
    cout<<cont2<<" mes(es)"<<endl;
    cout<<idade<<" dia(s)"<<endl;
    return 0;
}