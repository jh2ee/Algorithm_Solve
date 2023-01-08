#include<iostream>
using namespace std;

int main(){
    int n;
    int five=0,three=0;
    cin>>n;
    if(n<5){
        if(n!=3) cout<<"-1";
        else cout<<"1";
    }
    if(n==7) cout<<"-1";
    if(n>=5&&n!=7){
        if(n%5==0){
            five=n/5;
            cout<<five;
        }
        else if(n%5==1){
            five=(n-6)/5;
            three=2;
            cout<<five+three;
        }
        else if(n%5==2){
            five=(n-12)/5;
            three=4;
            cout<<five+three;
        }
        else if(n%5==3){
            five=(n-3)/5;
            three=1;
            cout<<five+three;
        }
        else{
            five=(n-9)/5;
            three=3;
            cout<<five+three;
        }
    }
}