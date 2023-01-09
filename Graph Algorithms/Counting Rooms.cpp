#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <queue>
 
#define MAX 1000
 
using namespace std;
 
int n, m, cuartos=0;
char plano[MAX][MAX];
 
void DFS(int x, int y){
    plano[x][y]='#';
    vector<pair<int, int>> moves={{0,1},{1,0},{0,-1},{-1,0}};
    for(int i=0; i<moves.size(); i++){
        if(x+moves[i].first>=0 && x+moves[i].first<n && y+moves[i].second>=0 && y+moves[i].second<m){
        if(plano[x+moves[i].first][y+moves[i].second]=='.'){
            DFS(x+moves[i].first, y+moves[i].second);
        }
        }
    }
}
 
int main()
{
    cin >> n >> m;
 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> plano[i][j];
        }
    }
 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(plano[i][j]=='.'){
                    cuartos++;
                DFS(i, j);
            }
        }
    }
    cout << cuartos;
    return 0;
}
