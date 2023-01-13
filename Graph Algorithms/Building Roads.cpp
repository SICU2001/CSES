#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <queue>
 
#define MAX 100005
 
using namespace std;
 
int n, m, a, b, build=0;
vector<vector<int>> roads(MAX), newRoads(MAX);
bool visited[MAX];
 
void DFS(int x){
    visited[x]=true;
    a=x;
    for(int i=0; i<roads[x].size(); i++){
        if(!visited[roads[x][i]]){
            DFS(roads[x][i]);
        }
    }
}
 
int main()
{
    cin >> n >> m;
 
    for(int i=0; i<m; i++){
        cin >> a >> b;
        roads[a].push_back(b);
        roads[b].push_back(a);
    }
    a=0, b=0;
 
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            b=i;
            if(a!=0){
                newRoads[build].push_back(a);
                newRoads[build].push_back(b);
                build++;
            }
            DFS(i);
        }
    }
    cout << build << endl;
    for(int i=0; i<build; i++){
        cout << newRoads[i][0] << " " << newRoads[i][1] << endl;
    }
    return 0;
}
 
 
