#include<iostream>
#include<cstring>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x,y,w,h;
    int min=1001;
    cin>>x>>y>>w>>h;
    if(min>x) min=x;
    if(min>y) min=y;
    if(min>w-x) min=w-x;
    if(min>h-y) min=h-y;
    cout<<min;
}