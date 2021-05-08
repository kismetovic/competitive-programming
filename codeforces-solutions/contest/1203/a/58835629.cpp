#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    int q;
    cin>>q;
    while(q--){
        int n;
        cin >> n;
        vector<int> a(n);
        int pos = -1;
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
            if (a[j] == 1) pos = j;
        }
        bool okl = true, okr = true;
        for (int j = 1; j < n; ++j) {
            okl &= (a[(pos - j + n) % n] == j + 1);
            okr &= (a[(pos + j + n) % n] == j + 1);
        }
        if (okl || okr) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}