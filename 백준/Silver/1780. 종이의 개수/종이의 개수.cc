#include <bits/stdc++.h>
using namespace std;

int board[2200][2200];
int cnt[3];

bool c(int x,int y,int n){
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(board[x][y]!=board[i][j]) return false;
        }
    }
    return true;
}

void func(int x,int y,int z){
    if(c(x,y,z)){
        cnt[board[x][y]+1]++;
        return;
    }
    int n=z/3; //3배수로만 주어지므로
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            func(x+i*n,y+j*n,n); //각 종이면에 대한 함수 실행
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    func(0,0,n); //함수 최초 실행
    for(int i=0;i<3;i++){
        cout<<cnt[i]<<"\n";
    }


    return 0;
}