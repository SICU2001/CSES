#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <queue>
#include <stack>
 
#define MAX 100005
 
using namespace std;
 
int N, m, a, b;
vector<vector<int>> roads(MAX);
stack<int> path;
bool posible, visited[MAX];
queue<int> bfs;
map<int,int> previous;
 
void BFS(int x){
    visited[x]=true;
    bfs.push(x);
    while(!bfs.empty()){
        int n=bfs.front();
        bfs.pop();
        for(int i=0; i<roads[n].size(); i++){
            if(!visited[roads[n][i]]){
                visited[roads[n][i]]=true;
                previous[roads[n][i]]=n;
                if(roads[n][i]==N){
                    posible=true;
                    return;
                }
                bfs.push(roads[n][i]);
            }
        }
    }
}
 
int main()
{
    cin >> N >> m;
 
    for(int i=0; i<m; i++){
        cin >> a >> b;
        roads[a].push_back(b);
        roads[b].push_back(a);
    }
 
    BFS(1);
 
    if(posible){
        int i=N;
        path.push(N);
        while(previous[i]!=1){
            i=previous[i];
            path.push(i);
        }
        int len=path.size();
        cout << len+1 << endl;
        cout<<1;
        for(int i=0;i<len; i++){
            cout << " " << path.top();
            path.pop();
        }
 
    }
    else{
        cout << "IMPOSSIBLE";
    }
 
    return 0;
}
 
