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
    string a;
    string jedan;
    string dva;
    string tri;
    string cetiri;
    string pet;
    cin>>a>>jedan>>dva>>tri>>cetiri>>pet;
    if(jedan[0]==a[0] or jedan[1]==a[1]) return cout<<"YES",0;
    if(dva[0]==a[0] or dva[1]==a[1]) return cout<<"YES",0;
    if(tri[0]==a[0] or tri[1]==a[1]) return cout<<"YES",0;
    if(cetiri[0]==a[0] or cetiri[1]==a[1]) return cout<<"YES",0;
    if(pet[0]==a[0] or pet[1]==a[1]) return cout<<"YES",0;
    cout<<"NO"<<endl;
    return 0;
}