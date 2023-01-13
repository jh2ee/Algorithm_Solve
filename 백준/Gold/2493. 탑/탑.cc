#include<bits/stdc++.h>
using namespace std;

stack <pair <int, int> > tower;
int n;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n;

    tower.push({100000001,0}); // 스택 empty로 인한 오류 막음

    for(int i=1;i<=n;i++){
        int h; cin>>h;
        while(tower.top().first<h){
            tower.pop();
        }
        cout<<tower.top().second<<" ";
        tower.push({h,i});
    }
}