#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[5][5],x,y,rezultat1=0,rezultat2=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				x=i;
				y=j;
			}
		}
	}
	y++;
	x++;
	if(x==3 && y==3) cout<<"0"<<endl;
	else{
		if(x<3){
			while (x<3){
				rezultat1++;
				x++;
			}
		}
		else if(x>3){
			while(x>3){
				rezultat1++;
				x--;
			}
		}
		if(y<3){
			while(y<3){
				rezultat2++;
				y++;
			}
		}
		else if(y>3){
			while(y>3){
				rezultat2++;
				y--;
			}
		}
		cout<<rezultat1+rezultat2;
	}

	return 0;
}
