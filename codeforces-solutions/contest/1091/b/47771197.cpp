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

int main(){
    long long n,x,y,rez1=0,rez2=0;
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>x>>y;
        rez1+=x;
        rez2+=y;
    }
    cout<<rez1/n<<" "<<rez2/n<<endl;
    return 0;
}
