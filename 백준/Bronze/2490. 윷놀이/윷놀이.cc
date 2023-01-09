#include<iostream>
using namespace std;

int main(){
    for(int k=0;k<3;k++){
        int a[4];
        int sum=0;
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        for(int i=0;i<4;i++){
            sum+=a[i];
        }
        if(sum==0) cout<<"D"<<"\n";
        if(sum==1) cout<<"C"<<"\n";
        if(sum==2) cout<<"B"<<"\n";
        if(sum==3) cout<<"A"<<"\n";
        if(sum==4) cout<<"E"<<"\n";
    }
}