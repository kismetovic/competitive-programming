#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a[100000],b[100000];
    cin>>n;
    int maks=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
        maks=max(maks,a[i]);
    }
    int maks2=0;
    for(int i=0;i<n;i++){
        if(maks%a[i]==0) b[a[i]]--;
        if(b[a[i]]==1){
            b[a[i]]--;
            maks2=max(maks2,a[i]);
        }
    }
    cout<<maks<<" "<<maks2;
    return 0;
}
