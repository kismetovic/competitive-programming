#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    long long n;
    cin>>n;
    if(n%2==0) return cout<<"NO",0;
    else{
        cout<<"YES"<<endl;
        vector<int> v(2*n);
        int pocetak=0;
        int temp=0,pravi=1;
        int a[2*n];
        for(int i=0;i<n;i++){
            if(pravi==1){
                v[i]=2*i+1;
                v[i+n]=2*i+2;
            }
            else{
                v[i]=2*i+2;
                v[i+n]=2*i+1;
            }
            pravi=-pravi;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}