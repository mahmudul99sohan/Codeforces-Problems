#include<bits/stdc++.h>
using namespace std;

main()
{
    int N;
    cin>>N;
    vector<int> V;
    for(int n=0; n<N; n++)
    {
        int a;
        cin>>a;
        V.push_back(a);
    }
    int ans=1,f_ans=1;
    for(int n=1; n<N; n++)
    {
        if(V[n]>=V[n-1])
        {
            ans++;
        }
        else
        {
            f_ans=max(ans,f_ans);
            ans=1;
        }
    }

    f_ans=max(ans,f_ans);
    cout<<f_ans<<"\n";

}
