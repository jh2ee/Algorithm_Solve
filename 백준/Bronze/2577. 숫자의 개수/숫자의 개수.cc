#include<iostream>
using namespace std;

int n[10];
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    a=a*b*c;
    while(a!=0)
    {
        n[a%10]++; 
        a=a/10;
    }
    for(int i=0;i<10;i++){
        cout<<n[i]<<"\n";
    }
}