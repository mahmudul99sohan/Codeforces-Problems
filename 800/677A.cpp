#include<iostream>
using namespace std;

main()
{
    int n,h;
    cin>>n>>h;
    int P[n],x=0;
    for(int i=0;i<n;i++)
    {
        cin>>P[i];
        if(P[i]<=h)
        {
            x++;
        }
        else if(P[i]>h)
        {
            x+=2;
        }
    }
    cout<<x<<endl;
}
