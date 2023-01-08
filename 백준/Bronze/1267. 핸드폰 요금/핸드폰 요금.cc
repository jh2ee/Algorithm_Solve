#include<iostream>
#include<vector>
using namespace std;

int y(vector<int> time){
    int fee=0;
    while(!time.empty()){
       fee+=(time.back()/30+1)*10;
        time.pop_back();
    }
    return fee;
}

int m(vector<int> time){
    int fee=0;
    while(!time.empty()){
       fee+=(time.back()/60+1)*15;
       time.pop_back();
    }
    return fee;
}

int main(){
    int n,element;
    vector<int> time;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        time.push_back(element);
    }
    if(y(time)<m(time)){
        cout<<"Y "<<y(time)<<"\n";
    }
    else if(y(time)==m(time)){
        cout<<"Y M "<<y(time)<<"\n";
    }
    else{
        cout<<"M "<<m(time)<<"\n";
    }
}