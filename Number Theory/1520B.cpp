#include<bits/stdc++.h>
using namespace std;

vector<long long int> V;

main()
{
    for(int i=1;i<=9;i++)
    {
        for(long long int j=i;j<=1000000000;j=i+(j*10))
        {
            V.push_back(j);
        }
    }
    sort(V.begin(),V.end());

//    for(int A: V)
//    {
//        cout<<A<<" ";
//    }
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        int counter=0;
        for(int i=0;V[i]<=n;i++)
        {
            counter++;
        }
        cout<<counter<<"\n";
    }


}
