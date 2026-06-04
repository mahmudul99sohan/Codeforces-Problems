#include<bits/stdc++.h>
using namespace std;

main()
{
    int N,val1,val2;
    cin>>N;
    vector<int> V(N+1,0);
    for(int n=1;n<N;n++)
    {
        cin>>val1>>val2;
        V[val1]++;
        V[val2]++;
    }

    int cnt=0;
    for(int n=1;n<=N;n++)
    {
        if(V[n]==1)
        {
            cnt++;
        }
    }

    cout<<cnt<<"\n";

}
