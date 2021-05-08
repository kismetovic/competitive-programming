#include <bits/stdc++.h>
	
#define ll long long
#define ii pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back

using namespace std;

int main(){
	string s;
	int n;

	scanf("%d", &n);
	cin >> s;

	int r = n-1;
	for (int i = 0; i < n; ++i){
		if(s[i] > s[i+1]){
			r = i;
			break;
		}
	}

	for (int i = 0; i < n; ++i){
		if(i != r){
			printf("%c", s[i]);
		}
	}
	printf("\n");
	
	return 0;
}