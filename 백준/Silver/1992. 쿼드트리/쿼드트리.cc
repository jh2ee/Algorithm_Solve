#include <bits/stdc++.h>
using namespace std;

int N;
int board[65][65]; //입력값 저장

void func(int r,int c,int n){ //n=2,4,8,16,32,64,128
    if(n==1){ 
        cout<<board[r][c];
        return;
    }
    bool zero=1, one=1;
    for(int i=r;i<r+n;i++){ //zero, one 모두 0이면 0,1이 섞여있는 경우임
        for(int j=c;j<c+n;j++){
            if(board[i][j]) zero=0; //1이 존재하는 경우
            else one=0; //0이 존재하는 경우
        }
    }
    if(zero) cout<<0;
    else if(one) cout<<1;
    else{
        cout<<"(";
        func(r,c,n/2); //좌측 상단
        func(r,c+n/2,n/2); //우측 상단
        func(r+n/2,c,n/2); //좌측 상단
        func(r+n/2,c+n/2,n/2); //우측 하단
        cout<<")";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>N;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        for(int j=0;j<N;j++){
            board[i][j]=s[j]-'0'; //string 타입의 입력을 int형으로 변환
        }
    }
    func(0,0,N);
    return 0;
}