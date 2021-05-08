#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        int cnt=0;
        cin>>n>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='8') break;
            else cnt++;
        }
        if(s.length()-cnt<11) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
