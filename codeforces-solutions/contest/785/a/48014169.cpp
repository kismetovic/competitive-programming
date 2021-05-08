#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,rez=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
    		rez+=4;
		}
		if(s=="Cube"){
    		rez+=6;
		}
		if(s=="Octahedron"){
    		rez+=8;
		}
		if(s=="Dodecahedron"){
    		rez+=12;
		}
		if(s=="Icosahedron"){
    		rez+=20;
		}
    }
    cout<<rez;
    return 0;
}
