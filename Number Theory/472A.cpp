#include<bits/stdc++.h>
using namespace std;

bool isprime(int A)
{
    int limit=sqrt(A)+1;
    for(int i=2;i<=limit;i++)
    {
        if(A%i==0)
        {
            return false;
        }
    }
    return true;
}

main()
{
    int N;
    cin>>N;
    if(N%2==0)
    {
        int x,y;
        x=N/2;
        y=N/2;
        if(isprime(x)==true)
        {
            cout<<--x<<" "<<++y<<"\n";
        }
        else
        {
            cout<<x<<" "<<y<<"\n";
        }
    }
    else if(N%2!=0)
    {
        int x,y;
        x=N/2;
        y=(N/2)+1;

        if(isprime(x)==true || isprime(y)==true)
        {
            while(isprime(x)==true || isprime(y)==true)
            {
                x--;
                y++;
            }

        }
        cout<<x<<" "<<y<<"\n";

    }
}
