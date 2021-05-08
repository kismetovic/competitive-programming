#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum1+=a;
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum2+=a;
    }
    (sum1>=sum2)?cout<<"Yes":cout<<"No";
    return 0;
}
