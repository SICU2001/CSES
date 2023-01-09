#include <iostream>
#include <vector>
 
using namespace std;
 
int n;
vector<int> lista;
 
int main()
{
    cin >> n;
    if(n==2 || n==3) cout << "NO SOLUTION";
    else{
        for(int i=n-1; i>0; i-=2) cout << i << " ";
        for(int i=n; i>0; i-=2) cout << i << " ";
    }
 
}
