#include <bits/stdc++.h>
using namespace std;

int n,k;
pair<int,int> j[1000002];
multiset<int> bag;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n>>k;
    for(int i=0;i<n;i++){ //x,y=가격,무게 
        cin>>j[i].second>>j[i].first;
    }
    sort(j,j+n);

    for(int i=0;i<k;i++){
        int c; cin>>c;
        bag.insert(c);
    }

    long long ans=0;
    for(int i=n-1;i>=0;i--){
        auto iter=bag.lower_bound(j[i].second); //가방에 담을 수 있는지 확인
        if(iter==bag.end()) continue; //실패 시 예외처리
        ans+=j[i].first;
        bag.erase(iter); //담은 가방 삭제
    }
    cout<<ans;

    return 0;
}