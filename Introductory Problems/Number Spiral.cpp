#include <iostream>
#include <vector>
 
using namespace std;
 
int t;
long long x,y;
 
int main()
{
    cin >> t;
    while(t--){
        cin>>x>>y;
        if(max(x,y)%2){
            if(x<=y) cout << y*y-x+1 << endl;
            else cout << (x-1)*(x-1)+y << endl;
        }
        else{
            if(x>=y) cout << x*x-y+1 << endl;
            else cout << (y-1)*(y-1)+x << endl;
        }
    }
 
}
