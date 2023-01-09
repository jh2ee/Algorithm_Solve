#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> height(9);
    int sum1=0,sum2=0;
    int temp;
    
    for(int i=0;i<9;i++) cin>>height[i];
    for(int i=0;i<9;i++){
        sum1+=height[i]; 
        sum2=sum1;
    }

    for(int i=0;i<8;i++){
        sum1=sum2;
        sum1-=height[i];
        if(sum1<=100) continue;
        for(int j=i+1;j<9;j++){
            sum1-=height[j];
            if(sum1==100){
                height[j]=height.back(); height.pop_back();
                height[i]=height.back(); height.pop_back();
                break;
            }
            sum1=sum2-height[i];
        }
        if(sum1==100) break;
    }

    sort(height.begin(),height.end());
    for(int i=0;i<7;i++){
        cout<<height[i]<<"\n";
    }
}