#include<iostream>
#include<vector>
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
        if(x-a[i]>0&&x-a[i]<2000001){
            if(arr[x-a[i]]==1) count++;
            arr[a[i]]=1;
        }
    }
    cout<<count<<"\n";
}
