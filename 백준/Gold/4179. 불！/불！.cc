#include <bits/stdc++.h>
using namespace std;

string board[1002];
int fire[1002][1002];
int dist[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
queue<pair<int,int> > q;
int jx,jy;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int r,c; cin>>r>>c;
    for(int i=0;i<r;i++){
        cin>>board[i];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            fire[i][j]=-1;
            dist[i][j]=-1;
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(board[i][j]=='J'){
                jx=i; jy=j; //지훈 초기 위치 저장
                dist[i][j]=0;
            }
            if(board[i][j]=='F'){
                q.push({i,j}); //불의 초기 위치 푸쉬
                fire[i][j]=0;
            }
            if(board[i][j]=='.') board[i][j]=0;
        }
    }

    while(!q.empty()){ //불의 확산시간 구하기
        auto cur=q.front(); q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx>=r||nx<0||ny>=c||ny<0) continue;
            if(board[nx][ny]=='#'||fire[nx][ny]>=0) continue;
            fire[nx][ny]=fire[cur.first][cur.second]+1;
            q.push({nx,ny});
        }
    }

    queue<pair<int,int> > q;
    q.push({jx,jy});
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx>=r||nx<0||ny>=c||ny<0){
                cout<<dist[cur.first][cur.second]+1;
                return 0;
            }
            if(board[nx][ny]=='#'||dist[nx][ny]>=0) continue;
            if(fire[nx][ny]!=-1&&fire[nx][ny]<=dist[cur.first][cur.second]+1) continue;
            dist[nx][ny]=dist[cur.first][cur.second]+1;
            q.push({nx,ny});
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}