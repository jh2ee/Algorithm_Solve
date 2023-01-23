#include <bits/stdc++.h>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--){
        string board[1002];
        int fire[1002][1002]={};
        int dist[1002][1002]={};
        queue<pair<int,int> > q;
        int sx,sy;
        int h,w; cin>>w>>h;
        for(int i=0;i<h;i++){
            cin>>board[i];
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                fire[i][j]=-1;
                dist[i][j]=-1;
            }
        }
        
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(board[i][j]=='@'){
                    sx=i; sy=j; //지훈 초기 위치 저장
                    dist[i][j]=0;
                }
                if(board[i][j]=='*'){
                    q.push({i,j}); //불의 초기 위치 푸쉬
                    fire[i][j]=0;
                }
            }
        }

        while(!q.empty()){ //불의 확산시간 구하기
            auto cur=q.front(); q.pop();
            for(int i=0;i<4;i++){
                int nx=cur.first+dx[i];
                int ny=cur.second+dy[i];
                if(nx>=h||nx<0||ny>=w||ny<0) continue;
                if(board[nx][ny]=='#'||fire[nx][ny]>=0) continue;
                fire[nx][ny]=fire[cur.first][cur.second]+1;
                q.push({nx,ny});
            }
        }

        bool breakout=false;
        queue<pair<int,int> > q2;
        q2.push({sx,sy});
        while(!q2.empty()){
            auto cur=q2.front(); q2.pop();
            for(int i=0;i<4;i++){
                int nx=cur.first+dx[i];
                int ny=cur.second+dy[i];
                if(nx>=h||nx<0||ny>=w||ny<0){
                    cout<<dist[cur.first][cur.second]+1<<"\n";
                    breakout=true;
                }
                if(breakout) break;
                if(board[nx][ny]=='#'||dist[nx][ny]>=0) continue;
                if(fire[nx][ny]!=-1&&fire[nx][ny]<=dist[cur.first][cur.second]+1) continue;
                dist[nx][ny]=dist[cur.first][cur.second]+1;
                q2.push({nx,ny});
            }
        }
        if(!breakout) cout<<"IMPOSSIBLE\n";
    }
    return 0;
}