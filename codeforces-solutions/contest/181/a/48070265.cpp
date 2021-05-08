#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,star=0,x=0,y=0,jest=0;
    cin>>n>>m;
    char c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>c[i][j];
            if(c[i][j]=='*'){
                star++;
            }
        }
        if(star==1 && jest==0){
            x=i;
            jest=1;
        }
        if(star==2) star=0;
    }
    star=0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(c[i][j]=='*') star++;
        }
        if(star==1){
            y=j;
            break;
        }
        if(star==2) star=0;
    }
    cout<<x+1<<" "<<y+1;
    return 0;
}
