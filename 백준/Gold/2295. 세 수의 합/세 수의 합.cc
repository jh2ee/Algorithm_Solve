#include <bits/stdc++.h>
using namespace std;

int n;
int u[1002];
vector<int> xy;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++) cin>>u[i];
    sort(u,u+n);

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            xy.push_back(u[i]+u[j]);
        }
    }
    sort(xy.begin(),xy.end());

    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(binary_search(xy.begin(),xy.end(),u[i]-u[j])){
                cout<<u[i];
                return 0;
            }
        }
    }

    return 0;
}