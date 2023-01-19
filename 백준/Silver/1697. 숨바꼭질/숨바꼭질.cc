#include <bits/stdc++.h>
using namespace std;

int board[200002];
int dx(int a, int b){
    if(a==0){return b+1;}
    if(a==1){return b-1;}
    if(a==2){return 2*b;}
    return 0;
}
queue<int> q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,k; cin>>n>>k;

    if(n==k){
        cout<<0; return 0;
    }

    q.push(n);
    while(1){
        auto cur=q.front(); q.pop();
        for(int i=0;i<3;i++){
            int nx;
            nx=dx(i,cur);
            if(nx>100000||nx<0) continue;
            if(board[nx]>0) continue;
            board[nx]=board[cur]+1;
            q.push(nx);
        }
        if(cur==k){
            cout<<board[k];
            return 0;
        }
    }
    return 0;
}