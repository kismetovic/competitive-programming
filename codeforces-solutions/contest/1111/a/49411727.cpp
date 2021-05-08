#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    string t;
    cin>>s>>t;
    if(s.length()!=t.length()) return cout<<"No",0;
    if(s.length()>t.length()){
        for(int i=0;i<t.length();i++){
            if(t[i]=='a' or t[i]=='e' or t[i]=='i' or t[i]=='o' or t[i]=='u'){
                if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                    return cout<<"No",0;
            }
            else{
                if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
                    return cout<<"No",0;
            }
        }
    }
    else if(s.length()>=t.length()){
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                if(t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u')
                    return cout<<"No",0;
            }
            else{
                if(t[i]=='a' or t[i]=='e' or t[i]=='i' or t[i]=='o' or t[i]=='u')
                    return cout<<"No",0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
