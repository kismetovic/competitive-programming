#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    long long n;
    cin>>n;
    long long sum=0;
    long long manji=0,nule=0;
    vector<long long> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a<=-1){
            manji++;
            v.push_back(a);
        }
        else if(a==0) nule++;
        else if(a>1) sum+=(a-1);
    }
    if(manji%2==0){
        for(int i=0;i<v.size();i++){
            sum+=(abs(v[i])-1);
        }
        sum+=nule;
        cout<<sum;
    }
    else if(manji%2!=0 && nule==0){
        for(int i=0;i<v.size();i++){
            sum+=(abs(v[i])-1);
        }
        sum+=2;
        cout<<sum;
    }
    else{
        for(int i=0;i<v.size();i++){
            sum+=(abs(v[i])-1);
        }
        sum+=1;
        sum+=(nule-1);
        cout<<sum;
    }
    return 0;
}