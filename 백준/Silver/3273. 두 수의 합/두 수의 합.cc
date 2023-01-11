#include<iostream>
#include<algorithm>
using namespace std;

int arr[2000005];
int a[1000001];
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n,element,x,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;

    for(int i=0;i<n;i++){
        if(arr[x-a[i]]==1) count++;
        arr[a[i]]=1;
    }
    cout<<count<<"\n";
}