#include <bits/stdc++.h>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t,n,m,k;
    cin>>t;
    
    while(t--){
        int ans=0;
        cin>>m>>n>>k;
        int board[52][52]={};
        bool v[52][52]={};
        queue<pair<int,int> > q1,q2;
        while(k--){ //board 초기화, 배추 위치 입력
            int x,y;
            cin>>x>>y;
            q1.push({y,x});
            board[y][x]=1;
        }
        
        while(!q1.empty()){
            auto input=q1.front(); q1.pop();
            if(v[input.first][input.second]) continue; //미방문인 경우만 루프

            q2.push({input.first,input.second}); 
            v[input.first][input.second]=true;

            while(!q2.empty()){
                auto cur=q2.front(); q2.pop();
                for(int i=0;i<4;i++){
                    int nx=cur.first+dx[i];
                    int ny=cur.second+dy[i];
                    if(nx<0||nx>=n||ny<0||ny>=m) continue; //유효하지 않은 인덱스 접근
                    if(v[nx][ny]||board[nx][ny]==0) continue; //이미 방문한 케이스
                    v[nx][ny]=true; q2.push({nx,ny});
                }
            }
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}