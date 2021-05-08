/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <climits>
#include <iomanip>
#include <bitset>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <map>

using namespace std;

int main(){
	int arr[10000];
	int n,k;
	cin>>n>>k;
	int a;
	for (int i=0;i<n;i++){
		cin>>a;
		arr[a]++;
	}
	int max=0;
	for (int i=0;i<1000;i++)
	{
		if (arr[i]>max) max=arr[i];
	}
	int dish=1;
	while (k*dish<max)
		dish++;
	int count=0;
	for (int i=0;i<1000;i++)
	{
		if (arr[i]!=0)
			count+=dish*k-arr[i];
	}
	cout<<count;
	return 0;
}
