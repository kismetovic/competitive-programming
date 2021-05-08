#include <bits/stdc++.h>
 
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
 
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

bool prost(i64 n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int gcd(i64 a,i64 b){
    if(b==0) return a;
    return gcd(b,a%b);
}
 
int main() {
    ios::sync_with_stdio(false);
    cout.precision(10);
    cout << fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    int a[100][100];
    int ima=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==1) ima=1;
        }
    }
    if(ima==0) return cout<<"0",0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                if(i==0){
                    if(j==0){
                        if(a[i+1][j]!=1) return cout<<"-1",0;
                        if(a[i+1][j+1]!=1) return cout<<"-1",0;
                        if(a[i][j+1]!=1) return cout<<"-1",0;
                    }
                    else if(j==m-1){                      
                        if(a[i][j-1]!=1) return cout<<"-1",0;
                        if(a[i+1][j-1]!=1) return cout<<"-1",0;
                        if(a[i+1][j]!=1) return cout<<"-1",0;
                    }
                    else{
                        int prva=0,druga=0;
                        if(a[i+1][j]!=1) prva=1;
                        if(a[i+1][j+1]!=1) prva=1;
                        if(a[i][j+1]!=1) prva=1;
                        if(a[i][j-1]!=1) druga=1;
                        if(a[i+1][j-1]!=1)  druga=1;
                        if(a[i+1][j]!=1) druga=1;
                        if(prva==1 && druga==1) return cout<<"-1",0;
                    }
                }
                else if(i==n-1){
                    if(j==0){
                        if(a[i-1][j]!=1) return cout<<"-1",0;
                        if(a[i-1][j+1]!=1) return cout<<"-1",0;
                        if(a[i][j+1]!=1) return cout<<"-1",0;
                    }
                    else if(j==m-1){                      
                        if(a[i][j-1]!=1) return cout<<"-1",0;
                        if(a[i-1][j-1]!=1) return cout<<"-1",0;
                        if(a[i-1][j]!=1) return cout<<"-1",0;
                    }
                    else{
                        int prva1=0,druga1=0;
                        if(a[i-1][j]!=1) prva1=1;
                        if(a[i-1][j+1]!=1) prva1=1;
                        if(a[i][j+1]!=1) prva1=1;
                        if(a[i][j-1]!=1) druga1=1;
                        if(a[i-1][j-1]!=1)  druga1=1;
                        if(a[i-1][j]!=1) druga1=1;
                        if(prva1==1 && druga1==1) return cout<<"-1",0;
                    }
                }
                else{
                    int p=0,t=0,q=0,r=0;
                    if(j==0){
                        if(a[i][j+1]!=1)p=1;
                        if(a[i+1][j+1]!=1)p=1;
                        if(a[i+1][j]!=1)p=1;
                        if(a[i-1][j]!=1)t=1;
                        if(a[i-1][j+1]!=1)t=1;
                        if(a[i][j+1]!=1) t=1;
                        if(p==1 && t==1) return cout<<"-1",0;
                    }
                    else if(j==m-1){
                        if(a[i][j-1]!=1)p=1;
                        if(a[i+1][j-1]!=1)p=1;
                        if(a[i+1][j]!=1)p=1;
                        if(a[i-1][j]!=1)t=1;
                        if(a[i-1][j-1]!=1)t=1;
                        if(a[i][j-1]!=1) t=1;
                        if(p==1 && t==1) return cout<<"-1",0;
                    }
                    else{
                        if(a[i+1][j]!=1) p=1;
                        if(a[i+1][j+1]!=1) p=1;
                        if(a[i][j+1]!=1) p=1;
                        if(a[i-1][j]!=1) t=1;
                        if(a[i-1][j+1]!=1) t=1;
                        if(a[i][j+1]!=1) t=1;
                        if(a[i-1][j]!=1) q=1;
                        if(a[i-1][j-1]!=1) q=1;
                        if(a[i][j-1]!=1) q=1;
                        if(a[i][j-1]!=1) r=1;
                        if(a[i+1][j-1]!=1) r=1;
                        if(a[i+1][j]!=1) r=1;
                        if(p==1 && q==r && r==1 && t==1) return cout<<"-1",0;
                    }
                }
            }
        }
    }
    vpi v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                if(a[i][j+1]==1 && a[i+1][j+1]==1 && a[i+1][j]==1){
                    v.push_back(make_pair(i,j));
                    continue;
                }
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    }
    return 0;
}