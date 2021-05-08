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
    int n,jest=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        int a,b;
        cin>>s>>a>>b;
        if(a>=2400 && b>a) jest=1;
    }
    if(jest) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
