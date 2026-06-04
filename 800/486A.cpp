#include<iostream>
#include<cmath>
using namespace std;

main()
{
    long long int n;
    cin>>n;

    long long int Fn=0;

    /*for(int i=1; i<=n; i++)
    {
        Fn+=((pow(-1,i))*i);
    }*/

    if(n%2==0)
    {
        Fn=n/2;
    }
    else if(n%2!=0)
    {
        Fn=n/2;
        Fn++;
        Fn*=(-1);
    }
    cout<<Fn<<endl;
}
