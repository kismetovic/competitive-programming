#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    pocetak:
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1] && s[i]=='1'){
            s.erase(s.begin()+i);
            goto pocetak;
        }
        if(s[i]=='0' && s[i+1]=='1'){
            swap(s[i],s[i+1]);
            goto pocetak;
        }
    }
    cout<<s;
    return 0;
}
