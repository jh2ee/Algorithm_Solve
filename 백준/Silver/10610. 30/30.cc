#include <bits/stdc++.h>
using namespace std;

int number[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    bool b=false;
    long long sum=0;
    
    string n;
    cin>>n;
    sort(n.begin(), n.end(), greater<>());

    if(n[n.length()-1]!='0') cout<<-1;
    else{
        for(auto o:n){
            sum+= o-'0';
        }
        if(sum%3!=0) cout<<-1;
        else cout<< n;
    }

    return 0;
}