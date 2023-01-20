#include <iostream>
#include <vector>
#include <bits/stdc++.h>
 
using namespace std;
 
long long n,x,s,res=0;
long long p[200005];
 
int main()
{
    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    sort(p,p+n);
    int i=0,j=n-1;
    while(i<j){
        if (p[i]+p[j]<=x) i++;
		res++;
		j--;
    }
    cout << res+(i==j) << endl;
}
