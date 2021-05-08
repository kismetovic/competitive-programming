#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,dodaj=0,oduzmi=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='+') dodaj++;
        else dodaj--;
        oduzmi=max(oduzmi,dodaj);
    }
    cout<<oduzmi;
    return 0;
}
