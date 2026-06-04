#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n+1]= {0},b[n+1]= {0},c[n]= {0};
    for(int i=1; i<n+1; i++)
    {
        cin>>a[i]>>b[i];
        c[i]=(b[i]-a[i])+c[i-1];
    }

    int max_c;
    max_c=c[1];
    for(int i=1; i<n+1; i++)
    {
        if(max_c<c[i])
        {
            max_c=c[i];
        }
    }

    cout<<max_c<<endl;

}
