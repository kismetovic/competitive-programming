#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        mp[str]++;
    }
    int count1=0;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        if(mp[str]>0){
            count1++;
            mp[str]--;
        }
    }
    cout<<(n-count1)<<endl;
}