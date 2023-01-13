#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int arr[10000000];
    int head=0;
    int tail=0;

    void push(int a){ arr[tail++]=a; }
    void pop(){
        if(head==tail) cout<<"-1\n";
        else{ cout<<arr[head++]<<"\n"; }
    }
    void size(){
        cout<<tail-head<<"\n";
    }
    void empty(){
        if(head==tail) cout<<"1\n";
        else{ cout<<"0\n"; }
    }
    void front(){
        if(head==tail) cout<<"-1\n"; 
        else{ cout<<arr[head]<<"\n"; }
    }
    void back(){
        if(head==tail) cout<<"-1\n";
        else{ cout<<arr[tail-1]<<"\n"; }
    }
};

int n;
string s;
Queue q;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    while(n--){
        cin>>s;
        if(s=="push"){
            int num; cin>>num;
            q.push(num);
        }
        if(s=="pop") q.pop();
        if(s=="size") q.size();
        if(s=="empty") q.empty();
        if(s=="front") q.front();
        if(s=="back") q.back();
    }
}