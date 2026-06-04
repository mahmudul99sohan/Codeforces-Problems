#include<bits/stdc++.h>
using namespace std;

int Upper_Bound_Func(vector<int> &V,int n,int X)
{
    int L=0,H=n,mid;

    while(L<H)
    {
        mid=L+((H-L)/2);

        if(X<V[mid])
        {
            H=mid;
        }
        else if(X>=V[mid])
        {
            L=mid+1;
        }
    }
    return H;
}

main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        int N;
        char c;
        cin>>N>>c;
        string s;
        cin>>s;
        s+=s;

        vector<int> G;

        for(int i=0; i<(N*2); i++)
        {
            if(s[i]=='g')
            {
                G.push_back(i);
            }
        }

        if(c=='g')
        {
            cout<<"0\n";
        }
        else
        {
            int g_size=G.size();
            int ans=0;
            for(int i=0; i<N; i++)
            {
                if(s[i]==c)
                {
                    int a=Upper_Bound_Func(G,g_size,i);
                    int dif=(G[a]-i);
                    ans=max(ans,dif);
                }
            }
            cout<<ans<<"\n";
        }


    }
}
