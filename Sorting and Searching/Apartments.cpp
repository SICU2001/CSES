#include <iostream>
#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
vector<long long> apl, apm;
long long n,m,k,a,res=0;
 
int main()
{
	cin >> n >> m >> k;
	for (long long i = 0; i < n; i++){
		cin >> a;
		apl.push_back(a);
	}
	for (long long i = 0; i < m; i++){
		cin >> a;
		apm.push_back(a);
	}
 
	sort(apl.begin(),apl.end());
	sort(apm.begin(),apm.end());
 
	long long i=0,j=0;
 
	while(i<n && j<m){
        if(apl[i]+k >= apm[j] && apl[i]-k <= apm[j]){
            res++;
            i++;
            j++;
        }
        else if(apl[i]+k < apm[j]) i++;
        else j++;
	}
 
	cout << res;
}
