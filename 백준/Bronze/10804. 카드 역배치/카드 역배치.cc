#include<iostream>
using namespace std;

int main(){
    int card[21];
    int temp, a,b;
    for(int i=1;i<=20;i++) card[i]=i;
    for(int i=0;i<10;i++){
        cin>>a>>b;
        for(int j=0;j<(b-a+1)/2;j++){
            temp=card[a+j];
            card[a+j]=card[b-j];
            card[b-j]=temp;
        }
    }
    for(int i=1;i<=20;i++){
        cout<<card[i]<<" ";
    }
    cout<<"\n";
}