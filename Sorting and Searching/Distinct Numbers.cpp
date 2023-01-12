#include <iostream>
#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
 
vector<long long> xs;
long long n,x,res=1;
 
int main()
{
	cin >> n;
	for (long long i = 1; i <= n; i++){
		cin >> x;
		xs.push_back(x);
	}
	sort(xs.begin(),xs.end());
	for (long long i = 0; i < n-1; i++) res += (xs[i] != xs[i+1]);
	cout << res;
}
