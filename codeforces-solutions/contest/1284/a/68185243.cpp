#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    string b;
    vector < string > v;
    vector < string > v1;
    int m, n;
    cin>>m>>n;
    for(int i = 0; i < m; i++) {
        cin>>a;
        v.push_back(a);
    }
    for(int i = 0; i < n; i++) {
        cin>>b;
        v1.push_back(b);
    }
    int q;
    cin>>q;
    while (q--) {
        int a;
        cin>>a;
        int prvi;
        int drugi;

        if(a%m == 0) prvi = m;
        else prvi = a%m;
        if(a%n == 0) drugi = n;
        else drugi = a%n;
        //cout<<(a%m)-1<<endl;
        //cout<<v[abs(a % m)]<<v1[abs(a % n)]<<endl;
        //cout<<v1[abs((a % m)+ (m%n) - 1)]<<endl;
        cout<<v[prvi-1]<<v1[drugi-1]<<endl;
    }
    return 0;
}
