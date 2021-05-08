#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,r=0,i=0;
    string s;
    string t="RGB";
    for(cin>>n>>s;i<n-1;i++){
        if(s[i+1]==s[i]){
            r++;
            for(auto x:t) 
				if(x!=s[i] && x!=s[i+2])
					s[i+1]=x;
        }
    }
    cout<<r<<"\n"+s;
    return 0;
}