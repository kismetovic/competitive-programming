#include <bits/stdc++.h>
 
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
 
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

    int t;
    cin>>t;
    while(t--){
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        long long rez=0;
        b=b/2;
        if(h>c){
            if(p>=b){
                rez+=b*h;
                b=0;
            }
            else{
                rez+=p*h;
                b-=p;
            }
            if(b>0){
                if(f>=b){
                   rez+=b*c;
                   b=0;
                }
                else{
                    rez+=f*c;
                    b-=f;
                }
            }
        }
        else if(c>=h){
            if(f>=b){
                rez+=b*c;
                b=0;
            }
            else{
                rez+=f*c;
                b-=f;
            }
            if(b>0){
                if(p>=b){
                    rez+=b*h;
                    b=0;
                }
                else{
                    rez+=p*h;
                    b-=p;
                }
            }
        }
        cout<<rez<<endl;

    }

    return 0;
}