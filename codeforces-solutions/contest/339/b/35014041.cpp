#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int *p=(int *)malloc(m*sizeof(int));
    //int arr[m];
    for(int i=0;i<m;i++){
		cin>>p[i];
	}
    int step;
    step=p[m-1]-1;
    int cycle=0;
    int i=1;
    while(i!=m){
        if(p[i]<p[i-1]){
           cycle+=1;
        }
        i++;}


    printf("%I64d",static_cast<long long>(n)*static_cast<long long>(cycle)+step);


return 0;}
