#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n,s;
        cin>>n>>s;

        int mid_index=ceil(n/2.0);

        int remain_index=n-(mid_index-1);

        cout<<(s/remain_index)<<"\n";
    }
}
