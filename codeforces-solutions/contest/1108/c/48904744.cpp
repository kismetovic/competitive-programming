#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,r,i,b,j;
    string s;
    string t[6]={"RGB","RBG","GRB","GBR","BRG","BGR"};
    int n;
    cin>>n>>s;
    for(j=0,a=n;j<6;j++){
        for(r=i=0;i<n;i++){
            r+=s[i]!=t[j][i%3];
        }
        if(r<a)a=r,b=j;
    }
    cout<<a<<endl;
    for(int i=0;i<n;i++){
        cout<<t[b][i%3];
    }
    return 0;
}
