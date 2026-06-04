#include<bits/stdc++.h>
using namespace std;


pair<int,int> Min_Index;

main()
{
    int n,k;
    cin>>n>>k;
    vector<int> V;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        V.push_back(val);
    }


//    int min_height=400;
//    int sum=1000000;
    for(int i=0; i<n-k; i++)
    {
        int sum=0;
        for(int j=i; j<(i+k); j++)
        {
            sum+=V[j];
        }
//        int sum=V[i]+V[i-1]+V[i-2];
        Min_Index.first=sum;
        Min_Index.second=i+1;
//        min_height=min(min_height,sum);
    }
    sort(Min_Index.begin(),Min_Index.end());

    cout<<Min_Index[0].secnd<<"\n";

}
