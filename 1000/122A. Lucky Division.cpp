#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x,a;
    cin>>n;
    x=n;
    int f=0,c=0;
    while(n!=0)
    {
        a=(n%10);
        n=n/10;
        f++;
        if(a==4 || a==7)
        {
            c++;
        }
    }
    if(c==f)
    {
        cout<<"YES\n";
    }
    else
    {
        if((x%4==0) || (x%7==0) || (x%44==0) || (x%74==0) || (x%47==0) || (x%77==0) ||
           (x%444==0) || (x%447==0) || (x%474==0) || (x%744==0) || (x%774==0) ||
           (x%747==0) || (x%477==0) || (x%777==0))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
