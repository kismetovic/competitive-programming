#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,rez=0;
    cin>>n;
    int temp=0;
    for(int i=n;i>=1;i-=2){
        if(temp==0){
            rez+=abs(i-(i-1));
            temp=1;
            continue;
        }
        else{
            rez-=abs(i-(i-1));
            temp=0;
            continue;
        }
    }
    cout<<rez;
    return 0;
}
