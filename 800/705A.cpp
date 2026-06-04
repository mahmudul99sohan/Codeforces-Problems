#include<iostream>
using namespace std;

main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0 && i==n)
        {
            cout<<"I hate it";
        }
        if(i%2!=0 && i<n)
        {
            cout<<"I hate that ";
        }

        else if(i%2==0 && i==n)
        {
            cout<<"I love it";
        }
        else if(i%2==0 && i<n)
        {
            cout<<"I love that ";
        }
    }
}
