#include <bits/stdc++.h>
using namespace std;

string s[102];

void R(int a, int b, int c, int d){
    if(a<0||a>=c||b<0||b>=d) return;
    if(s[a][b]!='R') return;
    s[a][b]=1;
    R(a+1,b,c,d); R(a,b+1,c,d); R(a-1,b,c,d); R(a,b-1,c,d);
}
void G(int a, int b, int c, int d){
    if(a<0||a>=c||b<0||b>=d) return;
    if(s[a][b]!='G') return;
    s[a][b]=1;
    G(a+1,b,c,d); G(a,b+1,c,d); G(a-1,b,c,d); G(a,b-1,c,d);
}
void B(int a, int b, int c, int d){
    if(a<0||a>=c||b<0||b>=d) return;
    if(s[a][b]!='B') return;
    s[a][b]=0;
    B(a+1,b,c,d); B(a,b+1,c,d); B(a-1,b,c,d); B(a,b-1,c,d);
}
void RG(int a, int b, int c, int d){
    if(a<0||a>=c||b<0||b>=d) return;
    if(s[a][b]!=1) return;
    s[a][b]=0;
    RG(a+1,b,c,d); RG(a,b+1,c,d); RG(a-1,b,c,d); RG(a,b-1,c,d);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int m=s[0].length();

    int r=0,g=0,b=0,rg=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<s[0].length();j++){
            if(s[i][j]=='R'){R(i,j,n,m); r++;}
            if(s[i][j]=='G'){G(i,j,n,m); g++;}
            if(s[i][j]=='B'){B(i,j,n,m); b++;}
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<s[0].length();j++){
            if(s[i][j]==1){RG(i,j,n,m); rg++;}
        }
    }
    cout<<r+g+b<<" "<<rg+b;

    return 0;
}