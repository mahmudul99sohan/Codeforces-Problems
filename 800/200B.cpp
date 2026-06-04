#include<iostream>
using namespace std;

main()
{
    int n;
    cin>>n;
    double V[n],S=0;

    for(int i=0;i<n;i++)
    {
        cin>>V[i];
        S+=V[i];
    }
   cout<<(S/double(n))<<endl;


}
