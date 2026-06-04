#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int total_data=(a*c);
    int download_in_vid=(b*c);
    int remain=(total_data-download_in_vid);
    int ans=remain/b;

    if(remain%b!=0)
    {
        ans+=1;
    }

    cout<<ans<<"\n";

}
