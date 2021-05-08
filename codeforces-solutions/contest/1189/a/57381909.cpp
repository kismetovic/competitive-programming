#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int nule=0,jedinice=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') jedinice++;
        else nule++;
    }
    if(nule!=jedinice) cout<<1<<"\n"<<s<<endl;
    else{
       cout<<2<<"\n"<<s[0];
       cout<<" ";
        for(int i=1;i<s.length();i++){
            cout<<s[i];
        }
    }
    return 0;
}
