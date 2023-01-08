#include <iostream>
 
using namespace std;
 
long long n, a, miss;
 
int main()
{
cin>> n;
miss=n*(n+1)/2;
n--;
while(n--){
    cin>>a;
    miss-=a;
}
cout << miss;
}
