#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--){
        if((s[i]>='A' && s[i]<='Z') or (s[i]>='a' && s[i]<='z')){
            if(s[i]=='a' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
                return cout<<"YES",0;
            }
            else return cout<<"NO",0;
        }
    }
    return 0;
}
