#include <bits/stdc++.h>
using namespace std;

int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--){
        int board[302][302]={};
        int dist[302][302]={};
        int l,x1,y1,x2,y2;
        queue<pair<int,int> > q;

        cin>>l>>x1>>y1>>x2>>y2;
        if(x1==x2&&y1==y2){
            cout<<0<<"\n";
            continue;
        }

        q.push({x1,y1});
        while(!q.empty()){
            auto cur=q.front(); q.pop();
            for(int i=0;i<8;i++){
                int nx=cur.first+dx[i];
                int ny=cur.second+dy[i];
                if(nx<0||nx>=l||ny<0||ny>=l) continue;
                if(dist[nx][ny]>0) continue;
                q.push({nx,ny});
                dist[nx][ny]=dist[cur.first][cur.second]+1;
                if(nx==x2&&ny==y2){
                    cout<<dist[nx][ny]<<"\n";
                }
            }
        }
    }
    return 0;
}