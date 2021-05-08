#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,x,y,z;
    cin>>x>>y>>z>>a>>b>>c;
    if(x>a) return cout<<"NO",0;
    else a-=x;
    int rez1=a+b;
    if(rez1<y) return cout<<"NO",0;
    else rez1-=y;
    int rez2=rez1+c;
    if(z>rez2) return cout<<"NO",0;
    cout<<"YES"<<endl;
    return 0;
}
