#include<bits/stdc++.h>
using namespace std;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
main()
{
    TxtIO;
    string s;
    int n;
    cin>>s>>n;

    if((n==1 && s=="front") ||(n==2 && s=="back"))
    {
        cout<<"L\n";
    }
    else if((n==2 && s=="front") ||(n==1 && s=="back"))
    {
        cout<<"R\n";
    }
}


