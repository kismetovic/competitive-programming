#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    char c[501][501];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    int rez=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]=='X'){
                if(c[i-1][j-1]=='X' && c[i-1][j+1]=='X' && c[i+1][j-1]=='X' && c[i+1][j+1]=='X') rez++;
            }
        }
    }
    cout<<rez;
    return 0;
}
