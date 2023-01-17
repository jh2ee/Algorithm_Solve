#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int board[502][502]={};
    bool visit[502][502]={};
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};

    int n,m; //n은 행, m은 열
    cin>>n>>m;
    for(int i=0;i<n;i++){ //board 초기화
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }

    int mx=0, num=0; //max는 그림 크기의 최대, num은 그림의 개수
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
            if(board[i][j]==0||visit[i][j]) continue;
            num++;
            queue<pair<int,int> > q;
            visit[i][j]=1; q.push({i,j});
            
            int area=0;
            while(!q.empty()){
                area++;
                pair<int,int> cur=q.front(); q.pop();
                for(int dir=0;dir<4;dir++){
                    int nx=cur.first+dx[dir];
                    int ny=cur.second+dy[dir];
                    if(nx<0||ny<0||nx>=n||ny>=m) continue;
                    if(visit[nx][ny]||board[nx][ny]!=1) continue;
                    visit[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
            mx=max(mx,area);
        }
    }
    cout<<num<<"\n"<<mx;
}