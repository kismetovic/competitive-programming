#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int cnt=0,cnt1=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a') cnt++;
        else cnt1++;
    }
    if(cnt1<cnt) cout<<s.length();
    else{
        cout<<s.length()-(cnt1-cnt)-1;
    }
    return 0;
}
