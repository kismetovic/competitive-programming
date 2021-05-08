#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << 2 << " ";
        if (n >= 3)
            cout << 3 << " ";
        for (int i = 4; i <= n; i++) {
            if (i == 2 or i == 3)
                continue;
            cout << i << " ";
        }
        cout << 1 << endl;
    }
    return 0;
}