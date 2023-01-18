#include<bits/stdc++.h>
using namespace std;
#define x first
#define y second

string board[102];
int dis[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n,m;

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>board[i];
        for(int j=0;j<m;j++) dis[i][j]=-1;
    }
    
    queue<pair<int,int> > q;
    q.push({0,0}); dis[0][0]=0;
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.x+dx[i];
            int ny=cur.y+dy[i];
            if(nx<0||nx>=n||ny<0||ny>=m) continue;
            if(dis[nx][ny]>=0||board[nx][ny]!='1') continue;
            dis[nx][ny]=dis[cur.x][cur.y]+1;
            q.push({nx,ny});
        }
    }
    cout<<dis[n-1][m-1]+1;
}