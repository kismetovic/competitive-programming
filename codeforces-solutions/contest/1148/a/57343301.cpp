#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x,y,z;
    cin>>x>>y>>z;
    if(x>y){
           // cout<<1<<endl;
        cout<<1+(z*2)+(2*y);
    }
    else if(x<y){
          // cout<<2<<endl;
        cout<<1+(z*2)+(x*2);
    }
    else{
           cout<<z*2+x+y;
    }
    return 0;
}
