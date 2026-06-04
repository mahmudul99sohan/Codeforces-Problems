#include<bits/stdc++.h>
//#include<vector>
using namespace std;

main()
{
    int N;
    cin>>N;
    int A[100],sum=0;
    for(int n=0;n<N;n++)
    {
        cin>>A[n];
        sum+=A[n];
    }

    sort(A, A + N);

    int first=0,count_coin=0;;

    for(int n=N-1;n>=0;n--)
    {
        if((sum-first)>=first)
        {
            first+=A[n];
            count_coin++;
        }
    }
    cout<<count_coin<<"\n";

}
