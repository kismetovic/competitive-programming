#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,check="abcdefghijklmnopqrstuvwxyz";
    int n;
    cin>>n>>s;
    if(n<26){
        cout<<"NO";
    }
    else{
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        }
        sort(s.begin(),s.end());
        int a=0;
        for(int j=0;j<n;j++){
            if(s[j]==check[a] && a<26){
                a++;
            }
        }
        cout<<((a==26)?"YES":"NO");
   }

    return 0;
}
