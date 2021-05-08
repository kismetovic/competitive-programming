#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    string s;
    s=a;
    reverse(a.begin(),a.end());
    cout<<s+a;
    return 0;
}
