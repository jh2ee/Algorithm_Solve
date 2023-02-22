#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--){
        int k; cin>>k;
        multiset<int> ms;
        while(k--){
            char s; int n;
            cin>>s;
            if(s=='D'){
                cin>>n;
                if(ms.empty()) continue;
                if(n==1) ms.erase(prev(ms.end()));
                else ms.erase(ms.begin());
            }
            if(s=='I'){
                cin>>n;
                ms.insert(n);
            }
        }
        if(ms.empty()){
            cout<<"EMPTY\n";
            continue;
        }
        cout<<*prev(ms.end())<<" "<<*ms.begin()<<"\n";
    }
    return 0;
}