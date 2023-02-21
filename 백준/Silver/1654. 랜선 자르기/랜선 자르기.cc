#include <bits/stdc++.h>
using namespace std;

int k,n;
int lan[10002];

bool func(long long x){ //x가 n개 이상 랜선을 만들 수 있는지 확인하는 함수
    long long cur=0;
    for(int i=0;i<k;i++) cur+=lan[i]/x;
    return cur>=n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>k>>n;
    for(int i=0;i<k;i++) cin>>lan[i];
    long long left=0;
    long long right=pow(2,31)-1;

    while(left<right){ //이분탐색
        long long middle=(left+right+1)/2; //left, right가 1차이 날 경우 left가 변하지 않아 루프에 빠짐
        if(func(middle)) left=middle; //n개 이상인 경우
        else right=middle-1; //n개 이하인 경우
    }
    cout<<left;

    return 0;
}