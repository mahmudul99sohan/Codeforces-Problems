#include<bits/stdc++.h>
using namespace std;

main()
{
    int N;
    int val;
    cin>>N;
    int A[5]={0};
    for(int i=0;i<N;i++)
    {

        cin>>val;
        A[val]++;
    }

    int sum[5]={0};
    sum[4]=A[4];
    sum[3]=A[3];

    if(A[2]%2==0)
    {
        sum[2]=A[2]/2;
    }
    else if(A[2]%2==1)
    {
        sum[2]=(A[2]/2)+1;
        A[1]-=2;

    }
    if(A[1]>A[3])
    {
        int rem_a=A[1]-A[3],x=0,y=0;
        if(rem_a%4==0)
        {
            sum[1]=rem_a/4;
        }
        else
        {
            x=rem_a/4;
            y=(A[1]-(x*4));
            sum[1]=(rem_a/4)+1;

        }

    }


    cout<<sum[1]+sum[2]+sum[3]+sum[4]<<"\n";

}
