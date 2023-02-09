#include <bits/stdc++.h>
using namespace std;

string s1;
string s2;
int d[1002][1002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    if(s1[0]==s2[0]) d[1][1]=1;
    else d[1][1]=0;
    
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s1[i-1]==s2[j-1]) d[i][j]=d[i-1][j-1]+1;
            else d[i][j]=max(d[i-1][j],d[i][j-1]);
        }
    }
    cout<<d[n1][n2];

    return 0;
}