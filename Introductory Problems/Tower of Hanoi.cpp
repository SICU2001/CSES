#include <iostream>
#include <math.h>

using namespace std;

int n;

void hanoi(int n,int a,int b){
    if(n==1){
        cout<<a<<" "<<b<<endl;
    }
    else{
        hanoi(n-1,a,6-a-b);
        cout<<a<<" "<<b<<endl;
        hanoi(n-1,6-a-b,b);
    }
}

int main()
{
	cin >> n;

	cout << pow(2,n)-1<<endl;
    hanoi(n,1,3);

	return 0;
}
