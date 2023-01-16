#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n,m,ans=0; //n은 deque의 크기, m은 case의 수
    deque<int> d; 
    cin>>n>>m;
    for(int i=1;i<=n;i++) d.push_back(i); //deque 생성, 1~n까지

    while(m--){
        int tg; cin>>tg;
        int t;

        while(1){
            if(tg-d.front()==0){ //찾은 경우, 1번 연산 수행
                d.pop_front();
                break;
            }
            for(int i=0;i<d.size();i++){
                if(d[i]==tg) t=i;
            }
            if(d.size()-t>=t){ //front에서 가깝거나 같은 경우, 2번 연산 수행
                d.push_back(d.front());
                d.pop_front(); ans++;
            }
            else{ //back에서 가까운 경우, 3번 연산 수행
                d.push_front(d.back());
                d.pop_back(); ans++;
            }
        }
    }
    cout<<ans;
}