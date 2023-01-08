#include <iostream>
 
using namespace std;
 
long long n,x,ant,res=0;
 
int main()
{
    cin>> n;
    cin>>ant;
    n--;
    while(n--){
        cin>>x;
        if(x<ant) res+=(ant-x);
        else ant=x;
    }
    cout << res;
}
