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
const int MAXN=110;

int N;
int arr[MAXN];

bool radi(int c){
    int ctot=0;
    for(int i=0;i<N;i++){
        if(arr[i]>c) return false;
        ctot+=arr[i];
    }
    return ctot * 2 < c * N;
}

int main(){
    cin.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int x=1;
    while(!radi(x))
        x++;
    cout<<x<<endl;
    return 0;
}