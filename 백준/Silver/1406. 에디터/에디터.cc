#include<iostream>
#include<list>
#include<cstring>
using namespace std;

int main(){
    string s;
    int m;
    list<char> l;
    cin>>s>>m;
    for(int i=0;i<s.length();i++) l.push_back(s[i]);

    list<char>::iterator cursor=l.end();

    while(m--){
        string order;
        cin>>order;
        if(order=="P"){
            char p; cin>>p;
            l.insert(cursor,p);
        }
        if(order=="L"&&cursor!=l.begin()) cursor--;
        if(order=="D"&&cursor!=l.end()) cursor++;
        if(order=="B"){
            if(cursor!=l.begin()){
                cursor--;
                cursor=l.erase(cursor);
            }
        }
    }
    for(cursor=l.begin();cursor!=l.end();cursor++){
        cout<<*cursor;
    }  
}