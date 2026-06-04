#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    ans=max((a+b+c),ans);
    ans=max((a*b*c),ans);
    ans=max(((a+b)*c),ans);
    ans=max((a*(b+c)),ans);
    ans=max((a*b+c),ans);
    ans=max((a+b*c),ans);
    cout<<ans<<"\n";
}
