#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , x;
        cin >> n >> x;
        int maks = 0;
        int ima = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == x) {
                ima = 1;
            }
            if (a > maks)
                maks = a;
        }
        //cout << "res:" <<endl;
        if (ima == 1) {
            //cout <<"1:"<<endl;
            cout << ima <<endl;
            continue;
        }
        if (maks > x) {
            cout << "2" <<endl;
            continue;
        }
        if (maks % x == 0) {
            //cout <<"2:"<<endl;
            cout << "2" <<endl;
            continue;
        }
        if (maks < x && x % maks == 0) {
            //cout <<"3:"<<endl;
            cout << x / maks <<endl;
            continue;
        }
        //cout <<"4:"<<endl;
        cout << (x / maks) + 1 << endl;
    }
    return 0;
}
