#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int a1, a2;
int t;
int main(){
	cin >> a1 >> a2;
	while(a1 && a2){
		if(a1 > a2)
			swap(a1,a2);
		if(a1 == a2 && a1 == 1)
			break;
		a1++, a2-=2;
		++t;
	}
	cout << t << endl;
	return 0;
}