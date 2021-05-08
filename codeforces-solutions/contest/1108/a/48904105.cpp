#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2) cout<<l1<<" "<<l2+1<<endl;
        else cout<<l1<<" "<<l2<<endl;
    }
    return 0;
}
