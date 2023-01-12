#include <iostream>
#define mod 1000000007
 
using namespace std;
 
long long a,b,c,n,pre,res;
 
int main()
{
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        a %= mod;
        b %= (mod-1);
 
        pre = 1;
        while (c > 0) {
            if (c & 1) pre = pre * b % (mod-1);
            b = b * b % (mod-1);
            c >>= 1;
        }
 
        res = 1;
        while (pre > 0) {
            if (pre & 1) res = res * a % mod;
            a = a * a % mod;
            pre >>= 1;
        }
        cout << res << endl;
    }
}
