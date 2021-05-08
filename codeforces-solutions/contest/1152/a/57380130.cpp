#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    long long parni=0,neparni=0;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        if(a%2==0) parni++;
        else neparni++;
    }
    long long parni1=0,neparni1=0;
    for(int i=0;i<m;i++){
        long long b;
        cin>>b;
        if(b%2==0) parni1++;
        else neparni1++;
    }
    int rez=0;
    if(parni>=neparni1) rez+=neparni1;
    if(parni<neparni1) rez+=parni;
    if(parni1>=neparni) rez+=neparni;
    if(parni1<neparni) rez+=parni1;
    cout<<rez;
    return 0;
}
