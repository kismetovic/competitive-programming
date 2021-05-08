#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin>> q;
    while(q--) {
        int x, y, a, b;
        cin>>x>>y>>a>>b;
        int rez = abs(x - y);
        int rez1 = a + b;
        if (rez % rez1 == 0)
            cout<<rez/rez1<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}