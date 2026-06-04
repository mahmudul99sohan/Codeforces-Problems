#include<bits/stdc++.h>
using namespace std;

main()
{
    int N;
    cin>>N;
    vector<int> V;
    for(int i=0;i<N;i++)
    {
        int a;
        cin>>a;
        V.push_back(a);
    }
    sort(V.begin(),V.end());
    for(int i=0;i<N;i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<"\n";
}
