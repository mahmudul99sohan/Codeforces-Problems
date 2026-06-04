#include<iostream>
using namespace std;

main()
{
    int N,temp;
    cin>>N;
    int V[N+1],X[N+1];
    for(int i=1;i<=N;i++)
    {
        cin>>temp;
        V[temp]=i;
    }

    for(int i=1;i<=N;i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<endl;
}
