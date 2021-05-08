#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    long long o=0,v=0,rez=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='o'){
            o+=v;
        }
        else if(i>0 && s[i-1]=='v'){
            v++;
            rez+=o;
        }
    }
    cout<<rez;
    return 0;
}
