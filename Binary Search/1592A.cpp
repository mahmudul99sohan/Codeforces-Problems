#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        long long int N,H;
        cin>>N>>H;
        vector<long long int> V;
        for(long long int n=0; n<N; n++)
        {
            long long int val;
            cin>>val;
            V.push_back(val);
        }
        sort(V.begin(),V.end(),greater<long long int>());

        long long int L=(V[0]+V[1]);

        if(H<=V[0])
        {
            cout<<"1\n";
        }
        else
        {
            long long int ans=((H/L)*2);

            if((H%L)==0)
            {
                ans+=0;
            }
            else if((H%L)>V[0])
            {
                ans+=2;
            }

            else if((H%L)<=V[0])
            {
                ans+=1;
            }

            cout<<ans<<"\n";
        }




    }
}
