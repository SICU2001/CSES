#include <iostream>
#include <vector>
#define MAX 1000006
 
using namespace std;
 
int n,x,xg,res,dv;
vector<int> resp(MAX);
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    cin>>n;
 
    for(int i=1;i<MAX;i++){
        for(int j=i; j<MAX; j+=i){
            resp[j]++;
        }
    }
 
    while(n--){
        cin>>x;
 
        cout << resp[x] << endl;
    }
}
