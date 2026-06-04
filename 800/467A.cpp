#include<iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
    int  p[n],q[n],x=0;

    for(int i=0;i<n;i++)
    {
        cin>>p[i]>>q[i];

        if((q[i]-p[i])>=2)
        {
            x++;
        }
    }
    cout<<x<<endl;
}
