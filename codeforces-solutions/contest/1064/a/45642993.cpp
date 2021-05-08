#include<iostream>
using namespace std;
int main()
{
    int a,b,c,k;
    cin>>a>>b>>c;

    if (a<b)
        swap(a,b);
    if (a<c)
        swap(a,c);
    

    if (b+c<=a)
    {
        k=a-(b+c)+1;
        cout<<k;
    }
    else if (b+c>a)
        cout<<"0";

}