#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int temp=0;
    int zv=0;
    int broj=0;
    for(int i=0;i<s.length();i++){
        temp++;
        if(s[i]=='*') zv=1;
        if(s[i]=='?' or s[i]=='*'){
            temp--;
            broj++;
        }
    }
    if(temp<k && !zv)  return cout<<"Impossible",0;
    int add=max(0,k-temp);
    int del=max(0,temp-k);
    if(del>broj) return cout<<"Impossible",0;
    string rez;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*'){
            while(add){
                add--;
                rez += rez.back();
            }
            if(del){
                rez.pop_back();
                del--;
            }
        }
        else if(s[i]=='?'){
            if(del){
                del--;
                rez.pop_back();
            }
        }
        else{
            rez += s[i];
        }
    }
    cout<<rez<<endl;
    return 0;
}
