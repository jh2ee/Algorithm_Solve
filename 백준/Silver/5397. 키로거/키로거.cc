#include<iostream>
#include<cstring>
#include<list>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        string s; cin>>s;
        list<char> l;
        auto c=l.end();

        for(int i=0;i<s.length();i++){
            if(s[i]=='<'){
                if(c!=l.begin())c--;
            }
            else if(s[i]=='>'){
                if(c!=l.end()) c++;
            }
            else if(s[i]=='-'){
                if(c!=l.begin()){
                    c--;
                    c=l.erase(c);
                }
            }
            else{
                l.insert(c,s[i]);
            }
        }
        for(c=l.begin();c!=l.end();c++) cout<<*c;
        cout<<"\n";
    }
}