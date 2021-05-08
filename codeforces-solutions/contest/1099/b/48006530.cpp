/******************************************
--------***ID:ADNAN KISMETOVIC***----------
----***USER:kismetovic-codeforces.com***---
*******************************************/
/*****************************************************************************************************************************************************************************************************
 *      ,ad8888ba,    ,ad8888ba,    88888888ba,    88888888888  88888888888  ,ad8888ba,    88888888ba     ,ad8888ba,   88888888888  ad88888ba         ,ad8888ba,    ,ad8888ba,    88b           d88  *
 *     d8"'    `"8b  d8"'    `"8b   88      `"8b   88           88          d8"'    `"8b   88      "8b   d8"'    `"8b  88          d8"     "8b       d8"'    `"8b  d8"'    `"8b   888b         d888  *
 *    d8'           d8'        `8b  88        `8b  88           88         d8'        `8b  88      ,8P  d8'            88          Y8,              d8'           d8'        `8b  88`8b       d8'88  *
 *    88            88          88  88         88  88aaaaa      88aaaaa    88          88  88aaaaaa8P'  88             88aaaaa     `Y8aaaaa,        88            88          88  88 `8b     d8' 88  *
 *    88            88          88  88         88  88"""""      88"""""    88          88  88""""88'    88             88"""""       `"""""8b,      88            88          88  88  `8b   d8'  88  *
 *    Y8,           Y8,        ,8P  88         8P  88           88         Y8,        ,8P  88    `8b    Y8,            88                  `8b      Y8,           Y8,        ,8P  88   `8b d8'   88  *
 *     Y8a.    .a8P  Y8a.    .a8P   88      .a8P   88           88          Y8a.    .a8P   88     `8b    Y8a.    .a8P  88          Y8a     a8P  888  Y8a.    .a8P  Y8a.    .a8P   88    `888'    88  *
 *      `"Y8888Y"'    `"Y8888Y"'    88888888Y"'    88888888888  88           `"Y8888Y"'    88      `8b    `"Y8888Y"'   88888888888  "Y88888P"   888   `"Y8888Y"'    `"Y8888Y"'    88     `8'     88  *
 *                                                                                                                                                                                                    *
 *****************************************************************************************************************************************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int issquare(long long n){
    long long temp;
    temp=sqrt(n);
    if(temp*temp==n) return 1;
    return 0;
}

int minsquare(long long n){
    for(int i=n;i>=4;i--){
        if(issquare(i)) return i;
    }
}
int main(){
    long long n,rez=0;
    cin>>n;
    if(n==1) return cout<<2,0;
    if(n==2) return cout<<3,0;
    if(n==3) return cout<<4,0;
    if(issquare(n)) cout<<2*sqrt(n);
    else{
        long long temp;
        temp=minsquare(n);
        long long temp1=n-2*sqrt(n);
        long long temp2=sqrt(temp);
        rez=2*temp2+((n-temp)/temp2);
        if((n-temp)%temp2!=0) rez++;
        cout<<rez;
    }
    return 0;
}
