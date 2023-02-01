#include <bits/stdc++.h>
using namespace std;

int inp[2200][2200];
int board[3];

bool check(int n, int a, int b){
    for (int i=a; i<a+n; i++){
        for (int j=b; j<b+n; j++){
            if (inp[a][b] != inp[i][j]) return false;
        }
    }
    return true;
}

void func(int n, int a, int b){
    if (check(n, a, b)){
        board[inp[a][b]+1] += 1;
        return;
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            func(n/3, a+(n/3)*i, b+(n/3)*j);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> inp[i][j];
        }
    }
    func(n, 0, 0);
    for (int i=0; i<3; i++) cout << board[i] << "\n";
}