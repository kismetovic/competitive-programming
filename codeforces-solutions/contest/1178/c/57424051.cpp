#include <bits/stdc++.h>

using namespace std;


int main(){
    int w,h;
    cin>>w>>h;
    w+=h;
    long long rez=1;
    for(int i=0;i<w;i++){
        rez=(rez*2)%998244353;
    }
    cout<<rez;
    return 0;
}
