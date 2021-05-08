#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,x1=0,x2=0,y1=0,y2=0;
    cin>>n>>m;
    char niz[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>niz[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(niz[i][j]=='B'){
                x1=i+1;
                y1=j+1;
                break;
            }
        }
        if(x1 or y1) break;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(niz[i][j]=='B'){
                x2=i+1;
                y2=j+1;
                break;
            }
        }
        if(x2 or y2) break;
    }
    cout<<(x1+x2)/2<<" "<<(y1+y2)/2;
    return 0;
}
