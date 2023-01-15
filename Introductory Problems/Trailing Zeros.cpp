#include <iostream>
 
using namespace std;
 
long long n, pot, dos=0, cinco=0;
 
int main()
{
    cin >> n;
 
    pot=2;
    while(pot<=n){
        dos+=n/pot;
        pot*=2;
    }
 
    pot=5;
    while(pot<=n){
        cinco+=n/pot;
        pot*=5;
    }
 
    cout << min(dos,cinco) <<endl;
    return 0;
}
