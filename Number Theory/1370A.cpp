#include<bits/stdc++.h>
using namespace std;

int GCD_num(int a,int b)
{
    if(b%a==0)
    {
        return a;
    }
    else
    {
        return GCD_num(b%a,a);
    }
}

main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n,a,b;
        cin>>n;
        if(n%2==1)
        {
            n--;
        }
        a=n/2;
        b=n;
        cout<<GCD_num(a,b)<<"\n";
    }

}
