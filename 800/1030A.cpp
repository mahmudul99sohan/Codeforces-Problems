#include<iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
    int V[n],easy=0,hard=0;

    for(int i=0;i<n;i++)
    {
        cin>>V[i];

        if(V[i]==0)
        {
            easy++;
        }
        else if(V[i]==1)
        {
            hard++;
        }
    }
   if(easy==n)
   {
       cout<<"EASY"<<endl;
   }
   else if(easy!=n)
   {
       cout<<"HARD"<<endl;
   }

}
