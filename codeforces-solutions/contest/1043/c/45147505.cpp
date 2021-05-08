#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <cmath>

using namespace std;
typedef long long ll;
const int MAXN = 1100;

int N;
string s;
char c[MAXN];
int rez[MAXN];

void okreni (int x){
    for (int i = 0; i < x / 2; i++)
        swap (c[i], c[x-1-i]);
    rez[x] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> s;
    N = s.length();
    for (int i = 0; i < N; i++)
        c[i] = s[i];

    for (int i = 1; i <= N; i++){
        if (i == N){
            if (c[0] == 'b')
                okreni (N);
            continue;
        }

        if (c[i] != c[i-1])
            okreni (i);
    }

    for (int i = 1; i <= N; i++){
        if (i > 1) cout << " ";
        cout << rez[i];
    }
    cout << "\n";
    return 0;
}