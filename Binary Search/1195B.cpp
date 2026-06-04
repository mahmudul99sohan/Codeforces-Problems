#include<bits/stdc++.h>
using namespace std;

main()
{
    int N,K;
    cin>>N>>K;
    int sum=0,a=N,ans=0;
    for(int n=1;n<=N;n++)
    {
        sum+=n;
        a--;
        if((sum-a)==K)
        {
            ans=N-n;
            break;
        }
    }
    cout<<ans<<"\n";
}
