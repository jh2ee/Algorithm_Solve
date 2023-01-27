#include <bits/stdc++.h>
using namespace std;

int N,white=0,blue=0;
int paper[130][130];

bool check(int r,int c,int n){
    for(int i=r;i<r+n;i++){
        for(int j=c;j<c+n;j++){
            if(paper[r][c]!=paper[i][j]) return false;
        }
    }
    return true;
}

void func(int r,int c,int n){ //n=2,4,8,16,32,64,128
    if(check(r,c,n)){
        if(paper[r][c]==1) blue++;
        else white++;
        return;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            func(r+i*n/2,c+j*n/2,n/2); //각 사분면을 재귀형태로 확인
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>paper[i][j];
        }
    }
    func(0,0,N);
    cout<<white<<"\n"<<blue;
    return 0;
}