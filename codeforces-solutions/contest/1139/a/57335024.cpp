#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n,cnt=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]%2==0) cnt+=(i+1);
    }
    cout<<cnt;
    return 0;
}
