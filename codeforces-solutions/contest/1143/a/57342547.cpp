#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int lijevo=0,desno=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0) lijevo++;
        else desno++;
        v.push_back(a);
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) lijevo--;
        else desno--;
        cnt++;
        if(lijevo==0 or desno==0) return cout<<cnt,0;
    }
    return 0;
}
