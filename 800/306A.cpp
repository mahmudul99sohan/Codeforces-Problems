#include<iostream>
using namespace std;

main()
{
    int n,m;
    cin>>n>>m;

    int candy_per=n/m;
    int rem_candy=n%m;

    for(int i=1;i<=m;i++)
    {
        if(rem_candy!=0)
        {
            cout<<candy_per+1<<" ";
            rem_candy--;
        }
        else
        {
            cout<<candy_per<<" ";
        }
    }
}
