#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    int sum=0;
    for(int i=0;i<5;i++){
        cin>>n;
        sum+=n*n;
    }
    cout<<sum%10;
}