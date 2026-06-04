#include<bits/stdc++.h>
using namespace std;

main()
{
    int N;
    cin>>N;
    vector<int> V;
    int val;
    for(int n=0;n<N;n++)
    {
        cin>>val;
        V.push_back(val);
    }

    int c=1;

    vector<int> Counter;

    for(int n=1;n<N;n++)
    {
        if(V[n]!=V[n-1])
        {
            Counter.push_back(c);
            c=1;
        }
        else
        {
            c++;
        }
    }

    Counter.push_back(c);

    int ans=0;

    if(Counter.size()>1)
    {
        int s=Counter.size();
        for(int i=0;i<s-1;i++)
        {
            ans=max(ans,min(Counter[i],Counter[i+1]));
        }
    }

    cout<<(ans*2)<<"\n";


}
