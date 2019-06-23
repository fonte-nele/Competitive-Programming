/*input
3
101 bin
101 dec
8f hex
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int convBinDec(string n) 
{ 
    string num = n; 
    int dec_value = 0; 
      
    int base = 1; 
      
    int len = num.length(); 
    for (int i=len-1;i>=0;i--) 
    { 
        if (num[i] == '1')         
            dec_value += base; 
        base = base * 2; 
    } 
      
    return dec_value; 
}

void convDecBin(int n) 
{ 
    int binaryNum[100000]; 
  
    int i = 0; 
    while (n > 0) 
    { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 

int hexadecimalToDecimal(string hexVal) 
{    
    int len = hexVal.size(); 
      
    // Initializing base value to 1, i.e 16^0 
    int base = 1; 
      
    int dec_val = 0; 
      
    // Extracting characters as digits from last character 
    for (int i=len-1; i>=0; i--) 
    {    
        // if character lies in '0'-'9', converting  
        // it to integral 0-9 by subtracting 48 from 
        // ASCII value. 
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
                  
            // incrementing base by power 
            base = base * 16; 
        } 
  
        // if character lies in 'A'-'F' , converting  
        // it to integral 10 - 15 by subtracting 55  
        // from ASCII value 
        else if (hexVal[i]>='a' && hexVal[i]<='f') 
        { 
            dec_val += (hexVal[i] - 87)*base; 
          
            // incrementing base by power 
            base = base*16; 
        } 
    } 
      
    return dec_val; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cont = 1, num;
    
    cin >> n;
    while(n--) 
    {
        string x, y;
        cin >> x >> y;

        cout << "Case " << dec << cont << ":" << endl;
        if(y == "bin"){
            num = convBinDec(x);
            cout << num << " dec" << endl;
            cout << hex << num << " hex" << endl;
        }
        else if(y == "dec")
        {
            num = atoi(x.c_str());
            cout << hex << num << " hex" << endl;
            convDecBin(num);
            cout << " bin" << endl;
        }
        else{
            //stringstream ss;
            //ss << hex << x;
            //ss >> num;
            f(0, (int)x.size()){
                x[i] = tolower(x[i]);
            }
            num = hexadecimalToDecimal(x); 
            cout << num << " dec" << endl;
            convDecBin(num);
            cout << " bin" << endl;
        }
        cout << endl;
        cont++;
    }
    return 0;
}