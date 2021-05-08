#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, x, y, n;
    vector<pair<int ,int> > v;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> x >> y;
            v.push_back({x, y});
        }
        bool ok = true;
        int xx = 0, yy = 0;
        for(int i = 0; i < n; ++i) {
            if(v[i].second > v[i].first) {
                ok = false;
                break;
            }
            if(i){
                if(xx > v[i].first) {
                    ok = false;
                    break;
                }
                if(yy > v[i].second) {
                    ok = false;
                    break;
                }
                if(v[i].first - xx < v[i].second - yy) {
                    ok = false;
                    break;
                }
            }
            xx = max(xx, v[i].first);
            yy = max(yy, v[i].second);
        }
        cout << (ok ? "YES\n" : "NO\n");
        v.clear();
    }
    return 0;
}