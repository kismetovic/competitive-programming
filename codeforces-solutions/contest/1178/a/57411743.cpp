#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,seats=0;
    cin>>n;
    vector<int> v;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        seats+=a;
        v.push_back(a);
    }
    if(v[0]>(seats/2)) return cout<<1<<"\n"<<1<<endl,0;
    int total=0;
    total+=v[0];
    v1.push_back(1);
    for(int i=1;i<n;i++){
        if(v[i]*2<=v[0]){
            total+=v[i];
            v1.push_back(i+1);
        }
    }
    if(total==v[0] && v1.size()==1) return cout<<0,0;
    if(total<=(seats/2)) return cout<<0,0;
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}
