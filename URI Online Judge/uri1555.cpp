#include <iostream>
using namespace std;

int rafael(int x, int y) 
{
    return 9*x*x + y*y;
}

int beto(int x, int y) 
{
    return 2*x*x + 25*y*y;
}

int carlos(int x, int y) 
{
    return -100*x + y*y*y;
}

int main() 
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        int x, y;
        cin >> x >> y;
        if(rafael(x,y) > beto(x,y) && rafael(x,y) > carlos(x,y)) 
            cout << "Rafael ganhou" << endl;
        else 
            if(beto(x,y) > rafael(x,y) && beto(x,y) > carlos(x,y))
                cout << "Beto ganhou" << endl;
            else
                cout << "Carlos ganhou" << endl;
    }
    return 0;
}