#include<bits/stdc++.h>
using namespace std;

struct Deque{
    int arr[20000001];
    int head=10000000, tail=10000000;

    void push_front(int a){ arr[head--]=a; }
    void push_back(int a){ arr[++tail]=a; }
    void pop_front(){
        if(head==tail) cout<<"-1\n";
        else{ cout<<arr[++head]<<"\n"; }
    }
    void pop_back(){
        if(head==tail) cout<<"-1\n";
        else{ cout<<arr[tail--]<<"\n"; }
    }
    void size(){ cout<<tail-head<<"\n"; }
    void empty(){
        if(head==tail) cout<<"1\n";
        else{ cout<<"0\n"; }
    }
    void front(){
        if(head==tail) cout<<"-1\n";
        else{ cout<<arr[head+1]<<"\n"; }
        }
    void back(){ 
        if(head==tail) cout<<"-1\n";
        else{ cout<<arr[tail]<<"\n"; }
    }
};

int n;
string s;
Deque d;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    while(n--){
        cin>>s;
        if(s=="push_front"){
            int num; cin>>num;
            d.push_front(num);
        }
        if(s=="push_back"){
            int num; cin>>num;
            d.push_back(num);
        }
        if(s=="pop_front"){ d.pop_front(); }
        if(s=="pop_back"){ d.pop_back(); }
        if(s=="size"){ d.size(); }
        if(s=="empty"){ d.empty(); }
        if(s=="front"){ d.front(); }
        if(s=="back"){ d.back(); }
    }
}