#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, m;
    int a, b;
    while(cin >> x >> y >> m){
        if(x > y) 
            swap(x, y);
        while(m--){
            cin >> a >> b;
            if(a > b)
                swap(a, b);
            printf("%s\n", a <= x && b <= y ? "Sim" : "Nao");
        }
    }
    return 0;
}