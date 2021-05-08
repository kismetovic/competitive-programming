#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,temp=1,rez=0;
    cin>>n;
    while(n){
        if(temp==1 && n>=1){
            n--;
            rez++;
            temp++;
        }
        else if(temp==2 && n>=2){
            n-=2;
            rez++;
            temp=1;
        }
        else break;
    }
    cout<<rez;
    return 0;
}
