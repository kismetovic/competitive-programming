#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int v[n];
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (n == 1) {
            cout << v[0] <<endl;
            continue;
        }
        int temp = 1;
        while (d > 0) {
            if (v[temp] == 0 && temp == n - 1) {
                d = 0;
                break;
            }
            //cout << "temp:" << temp <<" ;;; v[temp]:" << v[temp] << endl;
            if (v[temp] == 0) {
                //cout << "1" <<endl;
                temp++;
                continue;
            }
            if (temp > d) {
                //cout << "2" <<endl;
                d = 0;
                break;
            }
            else if (temp == d) {
                //cout << "3" <<endl;
                v[0]++;
                d = 0;
                break;
            }
            else {
                //cout << "4" <<endl;
                v[0]++;
                v[temp]--;
                d -= (temp);
                if (v[temp] == 0) {
                    temp++;
                    if (temp == n)
                        break;
                    else
                        continue;
                }
            }
        }
        cout << v[0] << endl;
    }
    return 0;
}
