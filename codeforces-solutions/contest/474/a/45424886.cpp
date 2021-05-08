#include <iostream>

using namespace std;

int main()
{
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    //s;;upimrrfod;pbr
    string x,res="";
    int index;
    char c;
    cin>>c;
    cin>>x;

        for(int i=0;i<x.length();i++)
        {
            for(int j=0;j<key.length();j++)
            {
                if(x[i]==key[j]){index=j;break;}
            }
            if(c=='R')
                res+=key[index-1];
            else if(c=='L')
                res+=key[index+1];

        }
        cout<<res;
    return 0;
}