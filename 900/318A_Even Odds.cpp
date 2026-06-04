#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int N,K,a;
    cin>>N>>K;
    if(N%2==0)
    {
        if(K>N/2)
        {
            a=K-(N/2);
            cout<<a*2<<"\n";
        }
        else
        {
            a=K;
            cout<<(a*2)-1<<"\n";
        }
    }
    else
    {
        if(K>((N/2)+1))
        {
            a=K-((N/2)+1);
            cout<<a*2<<"\n";
        }
        else
        {
            a=K;
            cout<<(a*2)-1<<"\n";
        }
    }

}
