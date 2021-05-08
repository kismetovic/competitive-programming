#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,rez1=0,rez2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        if(a>0) rez1++;
        if(a<0) rez2++;
    }
    if(n%2!=0) n++;
    if(rez1>=n/2) cout<<1;
    else if(rez2>=n/2) cout<<-1;
    else cout<<0;
    return 0;
}
