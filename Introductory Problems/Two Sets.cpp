#include <iostream>
 
using namespace std;
 
int n,pp;
 
int main()
{
	cin >> n;
 
	if(n%4==0 || n%4==3){
        pp=n/2;
        cout<<"YES"<<endl<<pp<<endl;
        if(n%2){
            for(int i=1; i<=(n/4);i++){
                cout<<i<<" "<<n-i<<" ";
            }
            cout<<n<<endl<<n-pp<<endl;
            for(int i=n/4+1;i<=n/2;i++){
                cout<<i<<" "<<n-i<<" ";
            }
        }
        else{
            for(int i=1; i<=(n/4);i++){
                cout<<i<<" "<<n+1-i<<" ";
            }
            cout<<endl<<n-pp<<endl;
            for(int i=n/4+1;i<=n/2;i++){
                cout<<i<<" "<<n+1-i<<" ";
            }
        }
 
	}
 
	else cout << "NO" << endl;
}
