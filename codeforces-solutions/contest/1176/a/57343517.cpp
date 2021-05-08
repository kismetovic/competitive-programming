#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        long long n;
        cin>>n;
        long long cnt=0,impossible=0;
        while(n>1){
            if(n%2==0){
                n/=2;
                cnt++;
            }
            else if(n%3==0){
                n=(2*n)/3;
                cnt++;
            }
            else if(n%5==0){
                n=(n*4)/5;
                cnt++;
            }
            else{
                impossible=1;
                break;
            }
        }
        if(impossible==1) cout<<"-1"<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}
