#include <iostream>
#define mod 1000000007
 
using namespace std;
 
long long a,b,n,res;
 
/* RECURSIVE APROACH
long long binExp(int a, int b){
    if(b==0) return 1;
    long long res = binExp(a,b/2);
    if(b%2) return res*res*a;
    else return res*res;
}
*/
 
int main()
{
    cin >> n;
    while(n--){
        cin >> a >> b;
        a %= mod;
        res = 1;
        while (b > 0) {
            if (b & 1) res = res * a % mod;
            a = a * a % mod;
            b >>= 1;
        }
        cout << res << endl;
    }
}
