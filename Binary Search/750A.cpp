#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,k;
    cin>>n>>k;

    vector<int> V;

    int sum=k;
    int mul,counter=0;
    for(int i=1;i<=n;i++)
    {
        mul=5*i;
        sum+=mul;
        if(sum<=240)
        {
            counter++;
        }
        else if(sum>240)
        {
            break;
        }


    }

    cout<<counter<<"\n";
}
