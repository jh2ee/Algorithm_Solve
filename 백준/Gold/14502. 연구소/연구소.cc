#include <bits/stdc++.h>
using namespace std;

int board[9][9];
int board2[9][9];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int n,m,ans=0;

void input(){
    // board 크기 입력
    cin>>n>>m;
    // board 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
}

void bfs(){
    int cnt=0;
    bool visit[9][9]={};
    queue<pair<int, int> > q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            board2[i][j]=board[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board2[i][j]==2) {
                q.push({i,j});
                visit[i][j]=true;

                while(!q.empty()){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();

                    for(int i=0;i<4;i++){
                        int nx=x+dx[i];
                        int ny=y+dy[i];

                        if(nx>=n||nx<0||ny>=m||ny<0) continue;

                        // 방문 가능시
                        if(!visit[nx][ny]&&board2[nx][ny]==0){
                            q.push({nx,ny});
                            visit[nx][ny]=true;
                            board2[nx][ny]=2;
                        }
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board2[i][j]==0) cnt++;
        }
    }
    if(cnt>ans) ans=cnt;
}

void partition(int wall){
    if(wall==3) bfs();
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==0){
                    board[i][j]=1;
                    partition(wall+1);
                    board[i][j]=0;
                }
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input();

    partition(0);
    
    cout<<ans;
    
    return 0;
}