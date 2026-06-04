#include<iostream>
using namespace std;

main()
{
    while(1){
    int n,k;
    cin>>n>>k;

    for(int i=1;i<=k;i++)
    {
        if(n%10!=0)
        {
            n=n-1;
        }
        else if(n%10==0)
        {
            n=n/10;
        }
    }


    cout<<n<<endl;}
    /*while(1){
    int a,b;
    cin>>a;
    b=a%10;
    cout<<b<<endl;}*/
}
