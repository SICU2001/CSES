#include <iostream>
#include <algorithm>
 
using namespace std;
 
long long n,x,res=-1000000008,sum=0;
 
int main()
{
	cin >> n;
 
	while(n--){
        cin>>x;
        sum+=x;
        res=max(sum,res);
        if(sum<0){
            sum=0;
        }
	}
    cout<<res;
	return 0;
}
