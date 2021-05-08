#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    vector<int> v;
    vector<int> v1;
    cin>>n>>a>>b;
    for(int i=0;i<a;i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    for(int i=0;i<b;i++){
        int c;
        cin>>c;
        v1.push_back(c);
    }
    int jest=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<v.size();j++){
            if(v[j]==i){
                cout<<1<<" ";
                jest=1;
                break;
            }
        }
        if(jest==0){
            for(int k=0;k<v1.size();k++){
                if(v1[k]==i){
                    cout<<2<<" ";
                    break;
                }
            }
        }
        jest=0;
    }
    return 0;
}
