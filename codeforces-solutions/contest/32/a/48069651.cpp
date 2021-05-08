#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    vector<int> v;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int rez=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else{
                if(abs(v[i]-v[j])<=d) rez++;
            }
        }
    }
    cout<<rez;
    return 0;
}
