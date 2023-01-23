#include <bits/stdc++.h>
using namespace std;

int board[103][103][103];
int dist[103][103][103];
int mx[]={1,0,-1,0,0,0};
int my[]={0,1,0,-1,0,0};
int mh[]={0,0,0,0,1,-1};
queue<pair<pair<int,int>,int > > q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,m,h;
    cin>>m>>n>>h;

    int cnt=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>board[j][k][i];
                if(board[j][k][i]==1) q.push({{j,k},i});
                if(board[j][k][i]==0){
                    dist[j][k][i]=-1;
                    cnt++;
                }
            }
        }
    }
    if(cnt==0){
        cout<<0;
        return 0;
    }

    while(!q.empty()){
        auto cur=q.front(); q.pop();
        for(int i=0;i<6;i++){
            int nx=cur.first.first+mx[i];
            int ny=cur.first.second+my[i];
            int nh=cur.second+mh[i];
            if(nx<0||nx>=n||ny<0||ny>=m||nh<0||nh>=h) continue;
            if(dist[nx][ny][nh]>=0) continue;
            q.push({{nx,ny},nh});
            dist[nx][ny][nh]=dist[cur.first.first][cur.first.second][cur.second]+1;
        }
    }

    int ans=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(dist[j][k][i]==-1){
                    cout<<-1;
                    return 0;
                }
                if(dist[j][k][i]>ans) ans=dist[j][k][i];
            }
        }
    }
    cout<<ans;

    return 0;
}