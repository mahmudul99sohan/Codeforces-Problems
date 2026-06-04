#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int X=0,Y=0,Z=0;
    for(int i=0;i<n;i++)
    {
        int xi,yi,zi;
        cin>>xi>>yi>>zi;
        X+=xi,Y+=yi,Z+=zi;
    }
    if(X==0 && Y==0 && Z==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}
