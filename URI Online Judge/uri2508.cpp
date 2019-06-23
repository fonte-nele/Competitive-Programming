#include <bits/stdc++.h>
using namespace std;

int return_value(char ch)
{
   if(ch == 'A' or ch == 'J' or ch == 'S') return 1;
   else if(ch == 'B' or ch == 'K' or ch == 'T') return 2;
   else if(ch == 'C' or ch == 'L' or ch == 'U') return 3;
   else if(ch == 'D' or ch == 'M' or ch == 'V') return 4;
   else if(ch == 'E' or ch == 'N' or ch == 'W') return 5;
   else if(ch == 'F' or ch == 'O' or ch == 'X') return 6;
   else if(ch == 'G' or ch == 'P' or ch == 'Y') return 7;
   else if(ch == 'H' or ch == 'Q' or ch == 'Z') return 8;
   else if(ch == 'I' or ch == 'R') return 9;
}

int single_digit(int n)
{
    int t = 0;
    while(n != 0)
    {
        t += n % 10;
        n /= 10;
    }
   return t;
}

int main()
{
    string s;
    while(getline(cin,s))
    {
        transform(s.begin(), s.end(),s.begin(), ::toupper);
        int sum = 0;
        for(int i = 0 ;i < s.size() ; i++ ) 
        {
            if(s[i] != 32)
            sum += return_value(s[i]);
        }
        while(sum > 9)
        {
            sum = single_digit(sum);
        }
        cout << sum << endl;
    }

    return 0;
}