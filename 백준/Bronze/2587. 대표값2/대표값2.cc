#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int element,a=0;
    vector <int> n;
    for(int i=0;i<5;i++){
        cin>>element;
        n.push_back(element);
    }
    sort(n.begin(),n.end());
    element=n[2];
    for(int i=0;i<5;i++){
        a+=n.back();
        n.pop_back();
    }
    cout<<a/5<<"\n"<<element<<"\n";
}