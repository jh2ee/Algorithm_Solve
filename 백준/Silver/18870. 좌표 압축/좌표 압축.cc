#include <bits/stdc++.h>
using namespace std;

int n;
int x[1000002];
vector<int> temp,uni;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        temp.push_back(x[i]);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++){
        if(i==0||temp[i]!=temp[i-1]) uni.push_back(temp[i]);
    }

    for(int i=0;i<n;i++){
        cout<<lower_bound(uni.begin(),uni.end(),x[i])-uni.begin()<<" ";
    }
    return 0;
}