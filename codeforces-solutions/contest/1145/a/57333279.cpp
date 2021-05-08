#include <bits/stdc++.h>

using namespace std;

int work(vector<int> &v, int l, int r){
    int i;
    for (i = l; i < r-1 && v[i]<=v[i+1]; ++i);
    if (i==r-1)
        return r-l;
    return max(work(v, l, (l+r)/2), work(v, (l+r)/2, r));
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<work(v,0,n);
    return 0;
}
