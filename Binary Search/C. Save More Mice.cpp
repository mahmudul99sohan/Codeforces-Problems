#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n,k,val;
        cin>>n>>k;

        vector<int> V;

        for(int i=0;i<k;i++)
        {
            cin>>val;
            V.push_back(val);
        }
        sort(V.begin(),V.end(),greater<int>());

        int cat_pos=0,ans=0;
        for(int i=0;i<k;i++)
        {
            if(cat_pos<V[i])
            {
                int a=(n-V[i]);
                cat_pos+=a;
                ans++;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<"\n";

    }
}
