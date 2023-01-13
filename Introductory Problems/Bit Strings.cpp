#include <iostream>
# define mod 1000000007
 
using namespace std;
 
int n;
long long a=2,res=1;
 
int main()
{
	cin >> n;
 
    while(n>0){
        if(n&1){
            res=res*a%mod;
        }
        a=a*a%mod;
        n>>=1;
    }
	cout << res << endl;
	return 0;
}
