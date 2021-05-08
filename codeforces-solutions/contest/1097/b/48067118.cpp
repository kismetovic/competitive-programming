#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a[16];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int rez=0;
    for(int i=0;i<(1<<n);i++){
        int s = 0;
		for (int j = 0; j < n; j++) {
			if ((i >> j) & 1)s += a[j];
			else s -= a[j];
		}
		if (s < 0)s = -s;
		if (s % 360 == 0) {
			cout<<"YES";
			return 0;
		}
    }
    cout<<"NO";
    return 0;
}
