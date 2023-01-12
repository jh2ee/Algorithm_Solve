#include<iostream>
#include<cstring>
using namespace std;

class Stack{
    private:
    int arr[100005]={};
    int pos=0;
    public:
    void push(int a){arr[pos++]=a;}
    void pop(){
        if(pos==0) cout<<"-1\n";
        else{ cout<<arr[--pos]<<"\n"; }
    }
    void top(){
        if(pos==0) cout<<"-1\n";
        else{ cout<<arr[pos-1]<<"\n"; }
    }
    void empty(){
        if(pos==0) cout<<"1\n";
        else cout<<"0\n";
    }
    void size(){cout<<pos<<"\n";}
};

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,num; cin>>n;
    string order;
    Stack s;
    while(n--){
        cin>>order;
        if(order=="push"){
            cin>>num;
            s.push(num);
        }
        if(order=="pop") s.pop();
        if(order=="top") s.top();
        if(order=="empty") s.empty();
        if(order=="size") s.size();
    }
}