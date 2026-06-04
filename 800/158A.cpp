#include<iostream>
using namespace std;

main()
{
    int n,k,count_=0;
    cin>>n>>k;
    int input[n];

    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }

    for(int i=0; i<n; i++)
    {
        if(input[i]>=input[k-1] && input[i]>0)
        {
            count_++;
        }
    }
    cout<<count_<<endl;
}
