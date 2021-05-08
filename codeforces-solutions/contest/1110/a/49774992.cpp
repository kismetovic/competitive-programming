#include <bits/stdc++.h>

using namespace std;

int main(){
    long long b=0,k=0;
    cin>>b>>k;
    long long rez=0;
    for(int i=0;i<k;i++){
        int a;
        cin>>a;
        rez=(b*rez+a)%2;
    }
    if(!rez) cout<<"even"<<endl;
    else cout<<"odd"<<endl;
    return 0;
}
