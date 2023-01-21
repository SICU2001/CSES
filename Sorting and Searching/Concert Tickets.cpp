#include <iostream>
#include <map>
#include <bits/stdc++.h>
 
using namespace std;
 
long long n,m,h;
map<long long,long long> pr;
 
int main()
{
    cin >> n >> m;
    pr[-1]=300000;
    pr[1000000009]=1;
    for(long long i=0; i<n; i++){
        cin >> h;
        pr[h]++;
    }
 
    for(long long i=0; i<m; i++){
        cin >> h;
 
        if(pr.size()==0){
            cout<<-1<<endl;
            continue;
        }
 
        map<long long,long long>::iterator buy=pr.lower_bound(h);
 
        while(buy->first > h) buy--;
 
        cout<<buy->first<<endl;
 
        if (--(buy->second) == 0)
			pr.erase(buy);
    }
 
}
