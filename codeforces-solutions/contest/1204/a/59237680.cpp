#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    string s;
    cin>>s;
    int jedinice=1;
    for(int i=1;i<s.length();i++){
        if(s[i]=='1') jedinice=0;
    }
    if(s.length()%2==0) jedinice=0;
    cout<<(s.length()+1)/2-jedinice;
    return 0;
}