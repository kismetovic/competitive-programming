#include <bits/stdc++.h>

using namespace std;

bool iseven(string a) {
    if (a[a.length() - 1] == '0' or  a[a.length() - 1] == '2' or a[a.length() - 1] == '4' or a[a.length() - 1] == '6' or a[a.length() - 1] == '8')
        return true;
    return false;
}

bool iseeben(string a) {
    if (iseven(a))
        return false;
    int rez = 0;
    for (int i = 0; i < a.length(); i++) {
        rez += a[i] - '0';
    }
    //cout <<rez<<endl;
    if (rez % 2 == 0)
        return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        if (n < 2)
            cout <<"-1"<<endl;
        else if (iseeben(a))
            cout <<a<<endl;
        else {
            //cout<<"here"<<endl;
            string novi = "";
            int temp = 0;
            while (temp < n) {
                if (novi == "" && a[temp] == '0') {
                    temp++;
                    continue;
                }
                novi += a[temp];
                if (iseeben(novi)) {
                    cout <<novi<<endl;
                    break;
                }
                if (temp > n) break;
                temp++;
            }
            if (temp >= n && !iseeben(novi))
                cout << "-1" << endl;
        }
    }
    return 0;
}
