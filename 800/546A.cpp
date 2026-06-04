#include<iostream>
using namespace std;

main()
{
   int k,n,w;
    cin>>k>>n>>w;
    int cost=0,need=0;
    for(int i=1;i<=w;i++)
    {
        cost=cost+(k*i);
    }

    need=cost-n;

    if(need>0)
    {
        cout<<need<<endl;
    }
    else if(need<=0)
    {
        cout<<"0"<<endl;
    }

}
