#include <bits/stdc++.h>
 
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n,one=0,zs=0,es=0,rs=0,os=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='n') one++;
        else{
            if(s[i]=='z') zs++;
            else if(s[i]=='e') es++;
            else if(s[i]=='r') rs++;
            else os++;
        }
    }
    if(one>0){
        if(os<one or es<one){
            for(int i=0;i<min(es,os);i++){
                cout<<"1 ";
            }
            return 0;
        }
        os-=one;
        es-=one;
        for(int i=0;i<one;i++) cout<<"1 ";
    }
    if(zs>0 && es>0 && rs>0 && os>0){
        for(int i=0;i<min(min(zs,es),min(rs,os));i++){
            cout<<"0 ";
        }
    }
    return 0;
}