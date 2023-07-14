#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long int s,num=1,n=0;
    cin>>s;

    while(s>0){
        if(s<num){
            num--;
            break;
        }
        else if(s==num) break;
        s-=num;
        num++;
    }

    cout<<num<<"\n";

    return 0;
}