#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <set>
 
#define MAX 100005
 
using namespace std;
 
int N, m, a;
pair<int,int> edge;
vector<vector<pair<int, int>>> graph(MAX);
 
const long long inf = 1e18;
vector<long long> weight;
 
vector<int> previous;
set<pair<long long, int>> remaining;
 
int main()
{
    cin >> N >> m;
 
    weight.assign(N+1, inf);
    previous.assign(N+1, -1);
    weight[1]=0;
    remaining.insert({0,1});
 
    for(int i=0; i<m; i++){
        cin >> a >> edge.first >> edge.second;
        graph[a].push_back(edge);
    }
    /*
    for(int i=1; i<=n; i++){
        cout << i;
        for(int j=0; j<graph[i].size(); j++){
            cout << " " << graph[i][j].first << " " << graph[i][j].second << ", " << endl;
        }
        cout<<endl;
    }
    */
    while(!remaining.empty()){
        int n = remaining.begin()->second;
        remaining.erase(remaining.begin());
        for(int i=0; i<graph[n].size(); i++){
            int to = graph[n][i].first;
            int len = graph[n][i].second;
            if(weight[to]>weight[n]+len){
                remaining.erase({weight[to],to});
                weight[to]=weight[n]+len;
                previous[to]=n;
                remaining.insert({weight[to],to});
            }
        }
 
    }
 
    for(int i=1; i<=N; i++){
        cout<<weight[i]<<" ";
    }
}
 
 
 
