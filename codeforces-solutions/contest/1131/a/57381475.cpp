#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    //int ostatak=0;
    //if(x1>x2)
    //ostatak=abs(x1-x2)*y1;
    //else
      //  ostatak=abs(x1-x2)*y2;
    //p1=(max(x1,x2)+2)*(y1+y2+2)-((x1*y1)+(y2*x2)+ostatak);
    cout<<2*(x1+y1+y2)+4<<endl;
    return 0;
}
