/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    vector<char> v;
    cin>>s;
    int r=s.length()-1;
    int l=0;
    int brojac=1;
    int rez=s.length();
    while(rez>0){
            if(s.length()%2==0){
                if(brojac%2==0){
                    v.push_back(s[l]);
                    l++;
                    rez--;
                }
                else{
                    v.push_back(s[r]);
                    r--;
                    rez--;
                }
                brojac++;
            }
            else{
                if(rez==1){
                    v.push_back(s[s.length()/2]);
                    break;
                }
                if(brojac%2==0){
                    v.push_back(s[r]);
                    r--;
                    rez--;
                }
                else{
                    v.push_back(s[l]);
                    l++;
                    rez--;
                }
                brojac++;
            }
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
	return 0;
}
