#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    int d=2;
    for(int i=0;i<n-(l-1);i++){
        a[i]=1;
    }
    for(int i=n-(l-1);i<n;i++){
        a[i]=d;
        d*=2;
    }
    long long sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
    }
    int temp=1;
    for(int i=0;i<r-1;i++){
        sum2+=temp;
        temp*=2;
    }
    for(int i=r-1;i<n;i++){
        sum2+=temp;
    }
    cout<<sum1<<" "<<sum2;
    return 0;
}