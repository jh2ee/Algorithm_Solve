#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k,sex,grade,room=0;
    int male[7]={};
    int female[7]={};
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>sex>>grade;
        if(sex==0){ //여학생
            female[grade]++;
        }
        if(sex==1){ //남학생
            male[grade]++;
        }
    }

    for(int i=1;i<7;i++){
        if(male[i]%k==0) room+=male[i]/k;
        if(male[i]%k!=0) room+=male[i]/k+1;
        if(female[i]%k==0) room+=female[i]/k;
        if(female[i]%k!=0) room+=female[i]/k+1;
    }
    cout<<room;
}