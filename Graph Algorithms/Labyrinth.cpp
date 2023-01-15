#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
 
#define MAX 1005
 
using namespace std;
 
int N, M, Ax, Ay, Bx, By;
char labr[MAX][MAX];
bool visited[MAX][MAX],posible=false;
vector<pair<int,int>> moves={{0,1},{1,0},{0,-1},{-1,0}};
pair<int,int> previous[MAX][MAX];
queue<pair<int,int>> bfs;
stack<char> path;
 
void BFS(){
    visited[Ax][Ay]=true;
    bfs.push({Ax,Ay});
    while(!bfs.empty()){
        pair<int,int> n=bfs.front();
        bfs.pop();
        for(int i=0; i<moves.size(); i++){
            if(n.first+moves[i].first>=0 && n.first+moves[i].first<N && n.second+moves[i].second>=0 && n.second+moves[i].second<M){
                if(!visited[n.first+moves[i].first][n.second+moves[i].second] && labr[n.first+moves[i].first][n.second+moves[i].second]!='#'){
                    visited[n.first+moves[i].first][n.second+moves[i].second]=true;
                    previous[n.first+moves[i].first][n.second+moves[i].second]=n;
                    bfs.push({n.first+moves[i].first,n.second+moves[i].second});
                    if(labr[n.first+moves[i].first][n.second+moves[i].second]=='B'){
                        posible=true;
                        return;
                    }
                }
            }
        }
    }
}
 
int main()
{
    cin >> N >> M;
 
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> labr[i][j];
            if(labr[i][j]=='A') Ax=i, Ay=j;
            if(labr[i][j]=='B') Bx=i, By=j;
        }
    }
 
    BFS();
 
    if(posible){
        int x=Bx,y=By,xp,yp;
        while(posible){
            xp=previous[x][y].first;
            yp=previous[x][y].second;
            if(x-xp){
                if(x-xp==-1){
                    path.push('U');
                }else{
                    path.push('D');
                }
            }else{
                if(y-yp==-1){
                    path.push('L');
                }else{
                    path.push('R');
                }
            }
            x=xp;
            y=yp;
            if(x==Ax && y==Ay) posible=false;
        }
 
        int len=path.size();
        cout << "YES" << endl << len << endl;
 
        for(int i=0;i<len; i++){
            cout << path.top();
            path.pop();
        }
 
    }
    else{
        cout << "NO";
    }
 
    return 0;
}
