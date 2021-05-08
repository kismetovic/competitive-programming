#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long l,r,d;
        cin>>l>>r>>d;
        if (d<l) {
            cout<<d<<endl;
        }
        else{
            cout<<1ll*d*(r/d+1)<<endl;
        }
    }
    return 0;
}
