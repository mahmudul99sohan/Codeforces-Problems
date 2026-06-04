#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int bn,bm;

    if(n%a==0)
    {
        bn=(n/a);
    }
    else
    {
        bn=(n/a)+1;
    }
    if(m%a==0)
    {
        bm=(m/a);
    }
    else
    {
        bm=(m/a)+1;
    }

    long long int num=(bn*bm);
    cout<<num<<"\n";

}
